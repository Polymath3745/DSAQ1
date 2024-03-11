#include "LinkedList.hpp"

int main()
{
    LinkedList list;
    for (int i = 1; i <=3; i++ )
    {
        list.insertAtEnd(i);
    }

    list.reverse(list.getHead());
    return 0;
}