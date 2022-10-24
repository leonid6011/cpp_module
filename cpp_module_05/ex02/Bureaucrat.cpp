/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:35:47 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/25 00:23:06 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ======================================================== */

Bureaucrat::Bureaucrat() : nameBureaucrat("DefaultName"), gradeBureaucrat(LOW), execGradeBureaucrat(LOW)
{
	if (gradeBureaucrat < HIGH)
		throw GradeTooHighException();
	else if (gradeBureaucrat > LOW)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << nameBureaucrat << " -> Default constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade, int exec) : nameBureaucrat(name), gradeBureaucrat(grade), execGradeBureaucrat(exec)
{
	if (gradeBureaucrat < HIGH)
		throw GradeTooHighException();
	else if (gradeBureaucrat > LOW)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << nameBureaucrat << " -> Default constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copyObject)
{
	*this = copyObject;
	std::cout << "Bureaucrat -> Copy constructor has been called." << std::endl;

}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << nameBureaucrat << " -> Destructor has been called." << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copyObject)
{
	std::cout << "Bureaucrat -> Operator overload = has been called" << std::endl;
	if (this != &copyObject)
	{
		*this = copyObject;
		return (*this);
	}
	return (*this);
}

/* ======================================================== */

const std::string &Bureaucrat::getName() const
{
    return nameBureaucrat;
}

int Bureaucrat::getGrade() const
{
    return gradeBureaucrat;
}

int Bureaucrat::getExecGrade() const
{
    return execGradeBureaucrat;
}

/* ======================================================== */

void Bureaucrat::rankUpBureaucrat()
{
	gradeBureaucrat--;
	if (gradeBureaucrat < HIGH)
	{
		throw GradeTooHighException();
	}
    else if (gradeBureaucrat > LOW)
	{
		throw GradeTooLowException();
	}
	std::cout << "The rank of bureaucrat " << nameBureaucrat << " was raised." << std::endl;
}

void Bureaucrat::rankDownBureaucrat()
{
	gradeBureaucrat++;
	if (gradeBureaucrat < HIGH)
	{
		throw GradeTooHighException();
	}
	else if (gradeBureaucrat > LOW)
	{
		throw GradeTooLowException();
	}
	std::cout << "The rank of bureaucrat " << nameBureaucrat << " was downgraded." << std::endl;
}

/* ======================================================== */

void Bureaucrat::signForm(Form &form)
{
    try
	{
        if (form.getFormIsSigned() == true)
        {
            std::cout << "Form " << form.getFormName() << " -> is already signed by the bureaucrat!" << std::endl;
            return;
        }
		else
		{
        	form.beSigned(*this);
        	std::cout << "The form " << form.getFormName() << " signing by: " << getName() << std::endl;
		}
    }
	catch (std::exception &e)
	{
        std::cout << "The bureaucrat " << getName() << " cannot sign form " << form.getFormName() << " because "
                  << getName() << " grade: " << getGrade() << " is low!" << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    try
	{
        std::cout << "The bureaucrat " << getName() << " tries to execute form: " << form.getFormName() << std::endl;
        form.execute(*this);
    }
	catch (std::exception &e)
	{
        std::cout << "The bureaucrat " << getName() << " cannot execute form " << form.getFormName()
                  << " because " << e.what() << std::endl;
    }
}

/* ======================================================== */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

/* ======================================================== */

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}