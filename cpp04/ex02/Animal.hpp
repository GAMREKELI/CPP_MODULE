#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <memory.h>
#include "Brain.hpp"

class Animal
{
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal& f);

    virtual ~Animal();

    std::string getType() const;

    virtual Animal& operator=(const Animal& f);

    virtual void makeSound() const = 0;

    virtual Brain   *getBrain() const;

protected:
    std::string _type;
};

#endif