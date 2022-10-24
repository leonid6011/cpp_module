/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:35:57 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/25 00:08:01 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <string>

class Form;

#define HIGH 1
#define LOW 150

class Bureaucrat
{
	private:
		const	std::string nameBureaucrat;
		int		gradeBureaucrat;
		
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copyObject);
		virtual ~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &copyObject);

		const std::string	&getName() const;
		int					getGrade() const;
	
		void rankUpBureaucrat();
		void rankDownBureaucrat();
		void signForm(Form &form);
		
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
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif