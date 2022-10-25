/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:26:17 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/25 01:01:01 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* ======================================================== */

PresidentialPardonForm::PresidentialPardonForm() 
	: Form("Presidential Pardon Form", PPF_SIGN, PPF_EXEC), target("Presidential Pardon Form")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("Presidential Pardon Form", PPF_SIGN, PPF_EXEC), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copyObject)
	: Form(), target(copyObject.target)
{}

PresidentialPardonForm::~PresidentialPardonForm() 
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copyObject)
{
	if (this != &copyObject)
	{
		*this = copyObject;
		return *this;
	}
	return *this;
}

/* ======================================================== */

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getFormIsSigned())
		throw Form::FormIsNotSignedException();
	else if (executor.getExecGrade() >= getExecuteFormGrade())
		throw Bureaucrat::GradeTooLowException();
	
	std::cout << target << " has been pardoned Zaphod Beeblebrox" << std::endl;
}

/* ======================================================== */