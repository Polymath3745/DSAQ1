#include "LinkedList.hpp"

LinkedList::LinkedList()
: head(nullptr)
{
    
}

void LinkedList::insertAtbeggining(int val)
{
    Node<int>* newNode = new Node<int>(val);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertAtEnd(int val)
{
    Node<int>* newNode = new Node<int>(val);
    if(head == nullptr)
    {
        head = newNode;
        return;
    }

    Node<int>* currentNode = head;
    while(currentNode->next != nullptr)
    {
        currentNode = currentNode->next;
    }

    currentNode->next = newNode;
}

void LinkedList::insert(int val, int target)
{
    Node<int>* newNode = new Node<int>(val);
    if(head == nullptr)
    {
        head = newNode;
        return;
    }

    int idxcnt = 0;
    Node<int>* currentNode = head;
    Node<int>* prevNode = nullptr;
    while(currentNode->next != nullptr && currentNode->data != target)
    {
        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    if (currentNode->data != target)
    {
        std::cout << "target node not found" << std::endl;
        return;
    }

    if(currentNode->next == nullptr && currentNode->data == target)
    {
        prevNode->next = newNode;
        newNode->next = currentNode;
    }

    prevNode->next = newNode;
    newNode->next = currentNode;
}

void LinkedList::deleteAtbeginning()
{
    if (head == nullptr)
    {
        std::cout << "No head to delete" << std::endl;
        return; //TODO: create a check error for this later
    }

    Node<int>* temp = head;
    head = head->next;
    delete temp;
}

void LinkedList::deleteAtEnd()
{
    if(head == nullptr)
    {
        std::cout << "Linked list is empty" << std::endl;
        return;
    }

    Node<int>* currentNode = head;
    Node<int>* prevNode = nullptr;

    // Special case: if there is only one node in the list
    if (currentNode->next == nullptr)
    {
        delete currentNode;
        head = nullptr;  // Update the head to nullptr
        return;
    }

    while(currentNode->next != nullptr)
    {
        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    prevNode->next = nullptr;
    delete currentNode;
}