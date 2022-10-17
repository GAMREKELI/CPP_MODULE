#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(std::string type);
    WrongCat(const WrongCat& w);

    ~WrongCat();

    WrongCat& operator=(const WrongCat& w);

	void makeSound() const;
};

#endif