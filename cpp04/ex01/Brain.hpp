#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
    Brain();
    Brain(const Brain& ot);

    Brain& operator=(const Brain& b);

    ~Brain();

    const std::string& getIdea(int index) const;

    std::string _ideas[100];
};

#endif