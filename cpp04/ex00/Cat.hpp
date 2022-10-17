#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string type);
    Cat(const Cat& c);

    ~Cat();

    Cat& operator=(const Cat& c);

    void makeSound() const;
};