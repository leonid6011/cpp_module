/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:35:47 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/19 22:37:28 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : nameBureaucrat("DefaultName"), gradeBureaucrat(LOW)
{
	if (gradeBureaucrat < HIGH)
		throw GradeTooHighException();
	else if (gradeBureaucrat > LOW)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << nameBureaucrat << " ->  Default constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : nameBureaucrat(name), gradeBureaucrat(grade)
{
	if (gradeBureaucrat < HIGH)
		throw GradeTooHighException();
	else if (gradeBureaucrat > LOW)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << nameBureaucrat << " ->  Default constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copyObject)
{
	std::cout << "Bureaucrat -> Copy constructor has been called." << std::endl;
	*this = copyObject;
	// if (gradeBureaucrat < HIGH)
	// 	throw GradeTooHighException();
	// else if (gradeBureaucrat > LOW)
	// 	throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << nameBureaucrat << "-> Destructor has been called." << std::endl;
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

const std::string &Bureaucrat::getName() const //поч 2 раза конст
{
    return nameBureaucrat;
}

int Bureaucrat::getGrade() const
{
    return gradeBureaucrat;
}

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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}