#include "LinkedList.hpp"

int main()
{
    LinkedList list;
    for (int i = 1; i <=10; i++ )
    {
        list.insertAtEnd(i);
    }

    list.iterativeTraversal();
    return 0;
}