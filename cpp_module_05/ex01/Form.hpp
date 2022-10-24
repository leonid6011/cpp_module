/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:47:01 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/21 21:07:34 by echrysta         ###   ########.fr       */
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

	std::string	getFormName();
	bool		getFormIsSigned();
	int			getSignFormGrade();
	int			getExecuteFormGrade();

	void		beSigned(Bureaucrat &b);
	void		checkFormGrade();
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif