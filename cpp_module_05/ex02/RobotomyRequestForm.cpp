/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:40:51 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/25 01:01:13 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/* ======================================================== */

RobotomyRequestForm::RobotomyRequestForm() 
	: Form("Robotomy Request Form", RRF_SIGN, RRF_EXEC), target("Robotomy Request Form")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
	: Form("Robotomy Request Form", RRF_SIGN, RRF_EXEC), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copyObject) 
	: Form(), target(copyObject.target)
{}

RobotomyRequestForm::~RobotomyRequestForm() 
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copyObject) 
{
	if (this != &copyObject)
	{
		*this = copyObject;
		return *this;
	}
	return *this;
}

/* ======================================================== */

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

	if (executor.getExecGrade() >= getExecuteFormGrade())
		throw Bureaucrat::GradeTooLowException();
    else if (!getFormIsSigned())
		throw Form::FormIsNotSignedException();
	
	std::srand(time(NULL));
	std::cout << "*TRRRRRRRRRRR*" << std::endl;
	if (std::rand() % 2)
		std::cout << target << " RobotomyRequest succsess!" << std::endl;
	else
		std::cout << target << " RobotomyRequest failed!" << std::endl;
}

/* ======================================================== */