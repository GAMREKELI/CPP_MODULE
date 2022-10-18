#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& c);

    ~Cat();

    Cat& operator=(const Cat& c);
    Animal& operator=(const Animal& f);

    Brain* getBrain() const;

    virtual void makeSound() const;

private:
    Brain* _brain;
};

#endif