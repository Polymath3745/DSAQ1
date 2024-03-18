#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

template <class T = std::string, class N = std::string, class M = int32_t>
class Dog
{
    public:
        Dog(T name, N breed, M age)
        : m_name(name),
          m_breed(breed),
          m_age(age)
        {

        };

        T getName();
        N getBreed();
        M getAge();

        void bark();

    private:
        T m_name;
        N m_breed;
        M m_age;
        void stand();
};

template <class T, class N, class M>
T Dog <T, N, M>::getName()
{
    return m_name;
}

template <class T, class N, class M>
N Dog<T, N, M>::getBreed()
{
    return m_breed;
}

template <class T, class N, class M>
M Dog<T, N, M>::getAge()
{
    return m_age;
}

template <class T, class N, class M>
void Dog<T, N, M>::bark()
{
    stand();
    std::cout << "Bark!" << std::endl;
}

template <class T, class N, class M>
void Dog<T, N, M>::stand()
{
    std::cout << m_name << " just stood up and..." << std::endl;
}
#endif