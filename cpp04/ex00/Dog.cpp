#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Constructor Dog() called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog " << type << " constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Distructor Dog called for " << this->_type << std::endl;
}

Dog::Dog(const Dog& d) : Animal(d)
{
    std::cout << "Constructor Dog called copy on " << d._type << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "BAARK!" << std::endl;
}

Dog& Dog::operator=(const Dog& d)
{
    this->_type = d._type;
    return (*this);
}