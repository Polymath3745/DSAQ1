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