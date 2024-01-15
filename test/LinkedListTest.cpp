#include <gtest/gtest.h>
#include "LinkedList.hpp"

/**
 * @brief Test fixture class for similar set up
 * 
 */
class LinkedListTest : public ::testing::Test
{
protected:
    // Common set-up code that will be executed before each test
    void SetUp() override
    {
        // Set up the linked list with some common initial state
        for (int i = 0; i <= 10; i++)
        {
            list.insertAtbeggining(i);
        }
    }

    // Common tear-down code that will be executed after each test
    void TearDown() override
    {
        // Clean up any resources or reset state if needed
    }

    // Common member variables accessible to all tests
    LinkedList list;
};

/**
 * @brief test for the insert at beginning function
 * in the linked list class
 * 
 */
TEST_F(LinkedListTest, insertAtbeginning)
{
    EXPECT_EQ(list.getHeadvalue(), 10);
}

/**
 * @brief test for the insert at end function
 * in the linked list class
 * 
 * This test does not utilize the test fixture
 */
TEST_F(LinkedListTest, insertAtEnd)
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

/**
 * @brief test for the delete at beginning 
 * function for the linked list class
 * 
 */
TEST_F(LinkedListTest, deleteAtBeginning)
{

    // Function call
    list.deleteAtbeginning();

    // Test values
    int expected_value = 9;
    int actual_value = list.getHeadvalue();

    // Test 
    EXPECT_EQ(actual_value, expected_value);
}