#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <memory.h>
#include <malloc.h>

class Animal
{
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal& f);

    virtual ~Animal();

    std::string getType() const;

    Animal& operator=(const Animal& f);

    virtual void makeSound() const;

protected:
    std::string _type;
};

#endif