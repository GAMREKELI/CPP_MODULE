#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "base";
    std::cout << "Constructor WrongAnimal() called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    _type = type;
    std::cout << "WrongAnimal " << type << " constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Distructor WrongAnimal called for " << this->_type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& w)
{
    this->_type = w._type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& w)
{
    _type = w._type;
    std::cout << "Constructor WrongAnimal called copy on " << w._type << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Default WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}