#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "Constructor WrongCat() called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    // _type = type;
    std::cout << "WrongCat " << type << " constructor called" << std::endl;
}

WrongCat::~WrongCat() 
{
    std::cout << "Distructor WrongCat called for " << this->_type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& w)
{
    this->_type = w._type;
    return (*this);
}

WrongCat::WrongCat(const WrongCat& w) : WrongAnimal(w)
{
    // _type = w._type;
    std::cout << "Constructor WrongCat called copy on " << w._type << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
