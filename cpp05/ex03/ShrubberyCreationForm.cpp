#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <cerrno>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form("shrubbery", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: Form(other)
{	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	this->Form::operator=(rhs);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("shrubbery", "default", 145, 137)
{
}

void ShrubberyCreationForm::action(const Bureaucrat& executor) const
{
	this->Form::execute(executor);
	std::string name = this->getTarget() + "_shruberry";
	char *name_char = &name[0];
    std::ofstream File(name_char);
	File << "                                                             ." << std::endl;
    File << "                                              .         ;  " << std::endl;
    File << "                 .              .              ;%     ;;   " << std::endl;
    File << "                   ,           ,                :;%  %;   " << std::endl;
    File << "                    :         ;                   :;%;'     .," << std::endl;   
    File << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
    File << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    File << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
    File << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    File << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    File << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    File << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
    File << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
    File << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
    File << "                          `@%%. `@%%    ;@@%;        " << std::endl;
    File << "                            ;@%. :@%%  %@@%;       " << std::endl;
    File << "                              %@bd%%%bd%%:;     " << std::endl;
    File << "                                #@%%%%%:;;" << std::endl;
    File << "                                %@@%%%::;" << std::endl;
    File << "                                %@@@%(o);  . '         " << std::endl;
    File << "                                %@@@o%;:(.,'         " << std::endl;
    File << "                            `.. %@@@o%::;         " << std::endl;
    File << "                               `)@@@o%::;         " << std::endl;
    File << "                                %@@(o)::;        " << std::endl;
    File << "                               .%@@@@%::;         " << std::endl;
    File << "                               ;%@@@@%::;.          " << std::endl;
    File << "                              ;%@@@@%%:;;;. " << std::endl;
    File << "                          ...;%@@@@@%%:;;;;,..  " << std::endl;

    File.close();
}
