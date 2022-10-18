#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){

    Animal  *animals[10];
    Brain   *brain_ptr;

    for (int i = 0; i < 10 ; i++){
        if ((i % 2) == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }

    brain_ptr = animals[0]->getBrain();
    brain_ptr->_ideas[0] = "Feed me slave";
    brain_ptr->_ideas[1] = "I gonna scratch you so bad !!";
    brain_ptr->_ideas[2] = "So you have choosen ... death";

    *animals[2] = *animals[0];

    std::cout << animals[2]->getBrain()->_ideas[2] << std::endl;
    animals[0]->makeSound();

    for (int j = 0; j < 10 ; j++){
        delete animals[j];
    }
}
