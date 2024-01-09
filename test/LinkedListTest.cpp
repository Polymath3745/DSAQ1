#include <gtest/gtest.h>
#include "LinkedList.hpp"

/**
 * @brief test for the insert at beginning function
 * in the linked list class
 * 
 */
TEST(LinkedListTest, insertAtbeginning)
{
    LinkedList list;
    for (int i = 0; i <= 10; i++)
    {
        list.insertAtbeggining(i);
    }

    EXPECT_EQ(list.getHeadvalue(), 10);
}

/**
 * @brief test for the insert at end function
 * in the linked list class
 * 
 */
TEST(LinkedListTest, insertAtEnd)
{
    LinkedList list;
    for (int i = 0; i <= 10; i++)
    {
        list.insertAtEnd(i);
    }

    Node<int>* temp = list.getHead();
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    EXPECT_EQ(temp->data, 10);
}