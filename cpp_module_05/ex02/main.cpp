/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:40:05 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/25 17:31:25 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	// std::cout << "==========================CREATE_FORM_TEST=============================" << std::endl;
	
	// try
	// {
	// 	Form testForm("FormExample", 100, 120);
	// 	std::cout << testForm;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << "=======================================================================" << std::endl;

	// try
	// {
	// 	Form formExampleTest("FormExampleTest", HIGH - 1, 100);
	// 	std::cout << formExampleTest;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << "Exception! You can't create a form: " << e.what() << std::endl;
	// }
	
	// try
	// {
	// 	Form formExampleTest("FormExampleTest", LOW + 1, 100);
	// 	std::cout << formExampleTest;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << "Exception! You can't create a form: " << e.what() << std::endl;
	// }
	
	// std::cout << "==========================CREATE_BUREAUCRAT_TEST=======================" << std::endl;
	
	// try
	// {
	// 	Bureaucrat Leonid("Leonid", HIGH);
		
	// 	std::cout << Leonid;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << "Exception! You cannot create such a bureaucrat: " << e.what() << std::endl;
	// }
	
	// std::cout << "=======================================================================" << std::endl;
	
	// try
	// {
	// 	Bureaucrat Leonid("Leonid", HIGH - 1);
		
	// 	std::cout << Leonid;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << "Exception! You cannot create such a bureaucrat: " << e.what() << std::endl;
	// }
	
	// try
	// {
	// 	Bureaucrat Leonid("Leonid", LOW + 1);
		
	// 	std::cout << Leonid;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << "Exception! You cannot create such a bureaucrat: " << e.what() << std::endl;
	// }
	
	// std::cout << "==========================RANK_BUREAUCRAT_TEST=========================" << std::endl;
	
	// try
	// {
	// 	Bureaucrat Leonid("Leonid", HIGH);
		
	// 	std::cout << Leonid;
	// 	Leonid.rankDownBureaucrat();
	// 	std::cout << Leonid;
	// 	Leonid.rankUpBureaucrat();
	// 	std::cout << Leonid;
	// 	Leonid.rankUpBureaucrat();
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << "Exception! You cannot change rank: " << e.what() << std::endl;
	// }
	
	// std::cout << "==============================SING_TEST================================" << std::endl;

	// try
	// {
	// 	Bureaucrat Leonid("Leonid", 100);
	// 	std::cout << Leonid;
		
	// 	Form Offer("Offer form", 140, 120);
	// 	std::cout << Offer;

	// 	Leonid.signForm(Offer);

	// 	Leonid.signForm(Offer);

	// 	Form tradeForm("Trade from", 90, 90);
	// 	std::cout << tradeForm;
		
	// 	Leonid.signForm(tradeForm);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "=======================================================================" << std::endl;
	
	std::cout << "=======================================================================" << std::endl;
    {
        Bureaucrat Leonid("Leonid", 149, 149);
        std::cout << Leonid << std::endl;
		
        Bureaucrat Doctor("Doctor", 10, 10);
        std::cout << Doctor << std::endl;
        
        Bureaucrat Prisoner("Prisoner", 50, 50);
        std::cout << Prisoner << std::endl;
        
        Bureaucrat President("Jafod Beeblebrox", 1, 1);
        std::cout << President << std::endl;
        
        ShrubberyCreationForm scfTest("garden");
        std::cout << scfTest << std::endl;
        
        RobotomyRequestForm rrfTest(Leonid.getName());
        std::cout << rrfTest << std::endl;
        
        PresidentialPardonForm ppfTest(Prisoner.getName());
        std::cout << ppfTest << std::endl;
        
		std::cout << "=======================================================================" << std::endl;
		
        try 
		{
            President.signForm(scfTest);
			President.signForm(scfTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }

        try
		{
            Prisoner.executeForm(scfTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }

		std::cout << "=======================================================================" << std::endl;

        try
		{
			President.signForm(rrfTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }

        try
		{
            Doctor.executeForm(rrfTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }
        
		std::cout << "=======================================================================" << std::endl;

        try
		{
			President.signForm(ppfTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }

        try
		{
            President.executeForm(ppfTest);
        }
		catch (std::exception &e)
		{
            std::cout << e.what() << std::endl;
        }
		
		std::cout << "=======================================================================" << std::endl;

		//Form testForm;
    }
    
}

//valgrind --leak-check=full ./Bureaucrat