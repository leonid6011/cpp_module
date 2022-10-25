/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:20:58 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/25 18:06:48 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *(*Intern::arrayForm[3])(std::string const &str) = {&Intern::scf, &Intern::rrf, &Intern::ppf};

Intern::Intern()
{}

Intern::Intern(const Intern &src)
{
    *this = src;
}

Intern::~Intern()
{}

Intern &Intern::operator=(const Intern &rhs)
{
    if (this != &rhs) {
        *this = rhs;
        return *this;
    }
    return *this;
}

Form *Intern::scf(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::rrf(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::ppf(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(const std::string &formName, const std::string &target)
{
    std::string formType[3] = {"shrubbery", "robotomy request", "pardon"};
    for (int i = 0; i < 3; i++)
	{
		if (formName == formType[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->arrayForm[i](target));
		}
	}
    throw Intern::FormException();
}

const char *Intern::FormException::what() const throw()
{
    return "Invalid form name!";
}