#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Node.hpp"
#include <iostream>

/**
 * @brief Linked list structure class
 * This class creates a singly linked list obj
 * which holds various operations that can be utilized      
 * 
 */
class LinkedList
{
    public:
        /**
         * @brief Construct a new Linked List object
         * 
         */
        LinkedList();
        
        /**
         * @brief insert a node at the begining of the linked list
         * 
         * @param val 
         */
        void insertAtbeggining(int val);

        /**
         * @brief insert a node at end of list
         * 
         * @param val 
         */
        void insertAtEnd(int val);
        
        /**
         * @brief insert a node at a specific location in the list
         * 
         * @param val 
         * @param location 
         */
        void insert(int val, int location);

        /**
         * @brief delete node at the beggining of the linked list
         *  
         */
        void deleteAtbeginning();

        /**
         * @brief delete node at end of list
         * 
         */
        void deleteAtEnd();
        
        /**
         * @brief delete a specific node in the list
         * 
         * @param target 
         */
        void del(int target);

        /**
         * @brief traverse the list iteratively
         * 
         */
        void iterativeTraversal();

         /**
         * @brief Overload for initialization
         * 
         */
        void recursiveTraversal();

        /**
         * @brief traverse the list recursively
         * 
         */
        void recursiveTraversal(Node<int>* node);

        /**
         * @brief search for a node in a list
         * 
         * @param target 
         */
        void search(int target);
        
        /**
         * @brief access a node and retrieve it from a specific index
         * 
         * @param idx 
         * @return Node<int>* 
         */
        Node<int>* access(int idx);

        /**
         * @brief calculates and returns the length of the list
         * 
         * @return int 
         */
        int length();

        /**
         * @brief checks if the list is empty
         * 
         * @return true 
         * @return false 
         */
        bool isEmpty();

        /**
         * @brief reverse the list
         * 
         */
        void reverse();

        /**
         * @brief Get the value contained in head object
         * for testing purposes
         * 
         * @return int 
         */
        int getHeadvalue()
        {
            return head->data;
        }

        Node<int>* getHead()
        {
            return head;
        }

    private:
        Node<int>* head;
};
#endif