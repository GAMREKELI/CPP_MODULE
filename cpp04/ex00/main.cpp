#include "Cat.hpp"
#include "Dog.hpp"
// #include "Animal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog("Barbos");
	const Animal* i = new Cat("Gav");
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat("Black Tabby");

	std::cout << std::endl << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	k->makeSound();
	l->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
}
