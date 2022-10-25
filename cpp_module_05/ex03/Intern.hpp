/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:16:20 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/25 18:06:18 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

class Intern
{
    private:
        //Form *(Intern::*func[3])(std::string target);
        static Form *(*arrayForm[3])(std::string const &str);
    public:
        Intern();
        Intern(const Intern &src);
        virtual ~Intern();
        Intern &operator=(const Intern &rhs);

        Form *makeForm(const std::string &formName, const std::string &target);

        static Form *scf(std::string const &target);
		static Form *rrf(std::string const &target);
		static Form *ppf(std::string const &target);

    class FormException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

#endif