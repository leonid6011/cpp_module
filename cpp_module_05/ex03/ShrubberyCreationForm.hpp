/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:20:06 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/24 00:35:26 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREaATIONFORM_HPP
# define SHRUBBERYCREaATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#define SCF_SIGN 145
#define SCF_EXEC 137

class ShrubberyCreationForm : public Form
{
	private:
    	std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copyObject);
		ShrubberyCreationForm(const std::string &target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copyObject);

		std::string getTarget() const;
		virtual void execute(Bureaucrat const &executor) const;
};

#endif