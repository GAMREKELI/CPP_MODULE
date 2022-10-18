#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Create Brain..." << std::endl;
}

Brain::Brain(const Brain& ot)
{
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = ot._ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& b)
{
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = b._ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
