/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:46:46 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/21 21:52:24 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ======================================================== */

Form::Form() : 
	nameForm("defaultForm"),
	FormIsSigned(false),
	SignFormGrade(LOW),
	ExecuteFormGrade(LOW)
{
	std::cout << "Form " << nameForm << " -> Default constructor has been called." << std::endl;	
}

Form::Form(std::string name, const int signGrade, const int execGrade) : 
	nameForm(name), 
	FormIsSigned(false),
	SignFormGrade(signGrade),
	ExecuteFormGrade(execGrade)
{
	checkFormGrade();
	std::cout << "Form " << nameForm <<  " -> Default constructor has been called." << std::endl;
}

Form::Form(const Form &copyObject) :
	nameForm(copyObject.nameForm), 
	FormIsSigned(copyObject.FormIsSigned),
	SignFormGrade(copyObject.SignFormGrade),
	ExecuteFormGrade(copyObject.ExecuteFormGrade)
{
	checkFormGrade();
	std::cout << "Form -> Copy constructor has been called." << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << nameForm << " -> Destructor has been called." << std::endl;
}

Form& Form::operator=(const Form &copyObject)
{
	if (this != &copyObject)
	{
		*this = copyObject;
		return *this;
	}
	return (*this);
}

/* ======================================================== */

std::string Form::getFormName()
{
	return (nameForm);
}

bool Form::getFormIsSigned()
{
	return (FormIsSigned);
}

int Form::getSignFormGrade()
{
	return (SignFormGrade);
}

int Form::getExecuteFormGrade() 
{
	return (ExecuteFormGrade);
}

/* ======================================================== */

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > SignFormGrade)
		throw Form::GradeTooLowException();
	else
		FormIsSigned = true;
}

void Form::checkFormGrade()
{
	if (SignFormGrade > LOW)
		throw GradeTooLowException();
	else if (SignFormGrade < HIGH)
		throw GradeTooHighException();
}

/* ======================================================== */

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade form is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade form is too low!");
}

/* ======================================================== */

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "Form " << form.getFormName() << " -> grade for signature: " << form.getSignFormGrade() << " grade for execution: " << form.getExecuteFormGrade() << std::endl;

	return out;
}

/* ======================================================== */