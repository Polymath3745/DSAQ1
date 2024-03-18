#include "LinkedList.hpp"
#include "Dog.hpp"

int main()
{
    LinkedList list;
    for (int i = 1; i <=3; i++ )
    {
        list.insertAtEnd(i);
    }

    list.reverse(list.getHead());

    Dog<>* dog = new Dog<>("rex", "mastiff", 32);
    dog->bark();
}