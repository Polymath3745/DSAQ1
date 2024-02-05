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

void LinkedList::del(int target)
{
    if (head == nullptr)
    {
        std::cout << "This list is already empty" << std::endl;
        return;
    }

    Node<int>* curr = head;
    Node<int>* prev = nullptr;

    if (curr->next == nullptr)
    {
        if (curr->data == target)
        {
            delete curr;
            return;
        }

        std::cout << "List does not contain target" << std::endl;
        return;
    }

    while (curr->next != nullptr && curr->data != target)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr->data != target)
    {
        std::cout << "List does not contain target";
        return;
    }

    else
    {
        prev->next = curr->next;
        delete curr;
    }
}

void LinkedList::iterativeTraversal()
{
    // Case where linked list is empty
    if (head == nullptr)
    {
        std::cout << "The list is empty" << std::endl;
        return;
    }

    // Case where linked list only contains 1 node
    else if (head->next == nullptr)
    {
        std::cout << "The list contains 1 node : " << head->data << std::endl;
        return;
    }

    Node<int>* current = head;
    while (current != nullptr)
    {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}