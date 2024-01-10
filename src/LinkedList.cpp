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