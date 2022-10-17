#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string type);
    Dog(const Dog& d);

    ~Dog();

    Dog& operator=(const Dog& d);

    void makeSound() const;

// protected:
};