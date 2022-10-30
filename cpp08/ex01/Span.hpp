#ifndef SPAN_HPP
#define SPAN_HPP

#include <climits>
# include <vector>
# include <iostream>
# include <stdexcept>

class Span
{
public:
    Span();
    Span(const unsigned int N);
    Span(const Span &copy);

    Span &operator=(const Span& s);
    unsigned    int     size() const;

    ~Span();

    void            addNumber(int add);
    void            addNumber(const std::vector<int>::iterator &start, const std::vector<int>::iterator &end);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();



    class ContIsFull : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return ("Container is full");
        }
    };

    class ContIsEmpty : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return ("Container is empty");
        }
    };

private:
    unsigned int    sizev;
    unsigned int    current_size;
    unsigned int    max_size;
    std::vector<int> p;
};

#endif