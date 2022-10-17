#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Constructor Cat() called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat " << type << " constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Distructor Cat called for " << this->_type << std::endl;
}

Cat::Cat(const Cat& c) : Animal(c)
{
    std::cout << "Constructor Cat called copy on " << c._type << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEEEEEOOW!" << std::endl;
}

Cat& Cat::operator=(const Cat& c)
{
    this->_type = c._type;
    return (*this);
}