/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:20:58 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/24 22:07:34 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() : type(-1)
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

Form *Intern::makeForm(const std::string &formName, const std::string &target)
{
    std::string formType[3] = {"shrubbery", "robotomy request", "pardon"};

    for (int i = 0; i < 3; i++)
    {
        if (formName == formType[i])
        {
            this->type = i;
            break;
        }
    }
    
    switch (type)
    {
        case 0:
        {
            Form *form = new ShrubberyCreationForm(target);
            std::cout << "Intern creates " << formName << " form!" << std::endl;
            return form;
        }
        case 1:
        {
            Form *form = new RobotomyRequestForm(target);
            std::cout << "Intern creates " << formName << " form!" << std::endl;
            return form;
        }
        case 2:
        {
            Form *form = new PresidentialPardonForm(target);
            std::cout << "Intern creates " << formName << " form!" << std::endl;
            return form;
        }
        case -1:
        {
            throw Intern::FormException();
            std::cout << "Intern creates " << formName << " form!" << std::endl;
            return (NULL);
        }
    }
    printf("lol  this->type = %d\n", this->type);
    return (NULL);
}

const char *Intern::FormException::what() const throw()
{
    return "Invalid form name!";
}