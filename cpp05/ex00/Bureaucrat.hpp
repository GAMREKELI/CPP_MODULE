#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(std::string const name, unsigned int grade);
    Bureaucrat(const Bureaucrat& B);

    // Bureaucrat&         operator=(const Bureaucrat& B);

    ~Bureaucrat();

    Bureaucrat&         operator=(const Bureaucrat& B);

    std::string const   getName() const;
    unsigned int        getGrade() const;

    void                incrementGrade();
	void                decrementGrade();

    // void                SetName(std::string const name);

    class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Grade too low");
		}
	};

private:
    std::string const	Name;
	unsigned int		Grade;
};

std::ostream&           operator<<(std::ostream& out, const Bureaucrat& f);

#endif