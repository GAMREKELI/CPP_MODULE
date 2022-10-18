#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Constructor Cat() called" << std::endl;
    _brain = new Brain();
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Distructor Cat called for " << this->_type << std::endl;
}

Cat::Cat(const Cat& c) : Animal(c)
{
    this->_brain = new Brain(*c._brain);
    std::cout << "Constructor Cat called copy on " << c._type << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEEEEEOOW!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return (this->_brain);
}

Cat& Cat::operator=(const Cat& c)
{
    this->_type = c._type;
    this->_brain = new Brain(*c._brain);
    return (*this);
}

Animal &Cat::operator=(Animal const &animal){
    std::cout << "Use copy operator Cat" << std::endl;
    this->_type = animal.getType();
    *(this->_brain) = *(animal.getBrain());
    return (*this);
}