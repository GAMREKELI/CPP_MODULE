#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){

    Cat cat;
    Dog dog;

    Animal *Obj1 = &cat;
    Animal *Obj2 = &dog;
    Obj1->makeSound();
    Obj2->makeSound();
}