#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Constructor Dog() called" << std::endl;
    _brain = new Brain();
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Distructor Dog called for " << this->_type << std::endl;
}

Dog::Dog(const Dog& d) : Animal(d)
{
    this->_brain = new Brain(*d._brain);
    std::cout << "Constructor Dog called copy on " << d._type << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "BAARK!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return (this->_brain);
}

Dog& Dog::operator=(const Dog& d)
{
    this->_type = d._type;
    this->_brain = new Brain(*d._brain);
    return (*this);
}

Animal &Dog::operator=(Animal const &animal){
    std::cout << "Use copy operator Dog" << std::endl;
    this->_type = animal.getType();
    *(this->_brain) = *(animal.getBrain());
    return (*this);
}