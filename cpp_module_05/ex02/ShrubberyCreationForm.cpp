/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:19:57 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/25 17:32:58 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ======================================================== */

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("Shrubbery", SCF_SIGN, SCF_EXEC)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
	: Form("Shrubbery", SCF_SIGN, SCF_EXEC), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copyObject) 
	: Form(), target(copyObject.target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copyObject) 
{
	if (this != &copyObject)
	{
		*this = copyObject;
		return *this;
	}
	return *this;
}

/* ======================================================== */

std::string ShrubberyCreationForm::getTarget() const
{
	return target;
}

/* ======================================================== */

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getExecGrade() >= getExecuteFormGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (!getFormIsSigned())
		throw FormIsNotSignedException();
	
	std::ofstream file((getTarget() + "_shrubbery").c_str());
	
	if (file.is_open())
	{
		file	<< "\n"
                << "              ,@@@@@@@,\n"
       			<< "	  ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
				<< "	,&%%&%&&%,@@@@@/@@@@@@,8888888/8o\n"
   				<< "   ,%&%%&&%&&%,@@@@@@@/@@@88888888/88'\n"
				<< "   %&&%&%&/%&&%@@@@@/ /@@@88888888888'\n"
				<< "    %&&%/ %&%%&&@@@ V /@@' `8888 `/88'\n"
				<< "    `&%& ` /%&'    |.|        ' '|8'\n"
				<< "        |o|        | |         | |\n"
				<< "	    |.|        | |         | |\n"
				<< "     \\/ ._//_/___/  ,__//__\\/.  __//__/_\n";
	}
	file.close();
	std::cout << executor.getName() << " successfully executed " << getFormName() << std::endl; 
}

/* ======================================================== */