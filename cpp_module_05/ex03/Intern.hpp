/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:16:20 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/24 21:32:09 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        int type;
    public:
        Intern();
        Intern(const Intern &src);
        virtual ~Intern();
        Intern &operator=(const Intern &rhs);

        Form *makeForm(const std::string &formName, const std::string &target);

    class FormException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

#endif