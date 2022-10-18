#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("Nikita")
{
    Grade = 150;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : Name(name)
{
    if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->Grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->Grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->Grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->Grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->Grade++;
}

std::string const Bureaucrat::getName() const
{
	return this->Name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->Grade;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& f)
{
	out << f.getName() << ", bureaucrat grade " << f.getGrade();
	return out;
}