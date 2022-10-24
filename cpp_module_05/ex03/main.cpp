/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:40:05 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/24 22:30:01 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern Intern;
		Bureaucrat Leonid("Leonid", 149, 149);
        std::cout << Leonid << std::endl;
		
        Bureaucrat Doctor("Doctor", 10, 10);
        std::cout << Doctor << std::endl;
        
        Bureaucrat Prisoner("Prisoner", 50, 50);
        std::cout << Prisoner << std::endl;
        
        Bureaucrat President("Jafod Beeblebrox", 1, 1);
        std::cout << President << std::endl;
        
        // ShrubberyCreationForm scfTest("garden");
        // std::cout << scfTest << std::endl;
        
        // RobotomyRequestForm rrfTest(Leonid.getName());
        // std::cout << rrfTest << std::endl;
        
        // PresidentialPardonForm ppfTest(Prisoner.getName());
        // std::cout << ppfTest << std::endl;
        
		std::cout << "=======================================================================" << std::endl;
		
        try 
		{
			Form *scfTest = Intern.makeForm("shrubbery", "garden");
            President.signForm(*scfTest);
			President.signForm(*scfTest);
			Prisoner.executeForm(*scfTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }
		
		std::cout << "=======================================================================" << std::endl;

        try
		{
			Form *rrfTest = Intern.makeForm("robotomy request", Leonid.getName());
			President.signForm(*rrfTest);
			Doctor.executeForm(*rrfTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }
		
		std::cout << "=======================================================================" << std::endl;

        try
		{
			Form *ppfTest = Intern.makeForm("pardon", Prisoner.getName());
			President.signForm(*ppfTest);
            President.executeForm(*ppfTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }
		
		std::cout << "=======================================================================" << std::endl;

		try
		{
			Form *lolTest = Intern.makeForm("lol", Prisoner.getName());
			President.signForm(*lolTest);
            President.executeForm(*lolTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }
}
