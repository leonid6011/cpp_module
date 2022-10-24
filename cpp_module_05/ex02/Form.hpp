/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:47:01 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/24 01:00:12 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <iostream>
# include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	nameForm;
		bool				FormIsSigned;
		const int			SignFormGrade; //ранг необходимый для подписания формы
		const int			ExecuteFormGrade; //ранг необходимый для выполнения формы

	public:
		Form();
		Form(std::string name, const int sign_grade, const int exec_grade);
		Form(const Form &copyObject);
		virtual ~Form();
		Form &operator=(const Form &copyObject);

	std::string	getFormName() const;
	bool		getFormIsSigned() const;
	int			getSignFormGrade() const;
	int			getExecuteFormGrade() const;

	void		beSigned(Bureaucrat &b);
	void		checkFormGrade();

	virtual void execute(const Bureaucrat &executor) const = 0;
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class FormIsNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif