#include "Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Constructor Animal() called" << std::endl;
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << "Constructor Animal for " << _type <<  " called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Distructor Animal for " << this->_type <<  " called" << std::endl;
}

Animal::Animal(const Animal& f)
{
    _type = f._type;
    std::cout << "Constructor Animal called copy on " << f._type << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Default animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}

Animal& Animal::operator=(const Animal& f)
{
    this->_type = f._type;
    return (*this);
}

Brain *Animal::getBrain() const{
    std::cout << "Normal Animal doesn't has brain" << std::endl;
    return (NULL);
}