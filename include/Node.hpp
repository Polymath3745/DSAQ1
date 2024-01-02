#ifndef NODE_HPP
#define NODE_HPP

template <class T>
class Node
{
    public:
        /**
         * @brief Construct a new Node object
         * 
         * @param value 
         */
        Node(T value)
        :data(value), next(nullptr)
        {

        }

        /**
         * @brief data contained in Node
         * 
         */
        T data;

        /**
         * @brief pointer of type Node
         * 
         */
        Node* next;
};

#endif