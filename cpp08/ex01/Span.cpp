#include "Span.hpp"
#include <numeric>
#include <iostream>
#include <cstdlib>
#include <algorithm>
Span::Span()
{
    this->sizev = 0;
    this->current_size = 0;
}

Span::Span(const unsigned int N)
{
    this->sizev = N;
    this->current_size = 0;
}

Span::Span(const Span &copy)
{
    this->sizev = copy.sizev;
    this->p = copy.p;
    this->current_size = copy.size();
}

Span::~Span()
{
    //std::cout << "Destructor called" << std::endl;
}

Span& Span::operator=(const Span& s)
{
    if (this != &s)
    {
        this->p = s.p;
        this->sizev = s.sizev;
        this->current_size = s.size();
    }
    return *this;
}

//void    Span::addNumber(int add)
//{
//    if (this->p.size() < this->sizev)
//        this->p.push_back(add);
//    else
//        throw ContIsFull();
//}

void    Span::addNumber(int add)
{
    if (this->current_size >= this->sizev){
        throw Span::ContIsFull();
    }
    ++(this->current_size); // = (this->current_size) + 1;
    this->p.push_back(add);
}

unsigned int    Span::shortestSpan()
{
    unsigned int    shortest = INT_MAX;
    unsigned int    tmp;
    std::vector<int>::iterator iter;

    if (this->size() <= 1)
        throw Span::ContIsEmpty();
    sort(this->p.begin(), this->p.end());
    iter = this->p.begin();
    tmp = *(iter);
    ++iter;

    while (iter != this->p.end())
    {
        if ((*(iter) - tmp) < shortest){
            shortest = (*(iter) - tmp);
        }
        tmp = *(iter);
        iter++;
    }
    return (shortest);
}

unsigned int    Span::longestSpan()
{
    if (this->size() <= 1)
        throw ContIsEmpty();

    std::sort(this->p.begin(), this->p.end());
    return (*(this->p.end() - 1) - *(this->p.begin()));
}

//void Span::addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end)
//{
//    int distance = std::distance(begin, end);
//    if (distance + this->p.size() > this->sizev)
//    {
//        this->p.insert(this->p.end(), begin, begin + (this->sizev - this->p.size()));
//        throw ContIsFull();
//    }
//    else
//        this->p.insert(this->p.end(), begin, end);
//}

unsigned    int     Span::size() const
{
    return (this->current_size);
}