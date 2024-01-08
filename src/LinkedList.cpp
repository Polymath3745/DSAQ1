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