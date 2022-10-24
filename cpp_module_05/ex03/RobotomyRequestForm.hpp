/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:38:30 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/24 20:47:28 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

#define RRF_SIGN 72
#define RRF_EXEC 45

class RobotomyRequestForm : public Form
{
    public:
	    RobotomyRequestForm();
	    RobotomyRequestForm(const std::string &target);
	    RobotomyRequestForm(const RobotomyRequestForm &copyObject);
	    virtual ~RobotomyRequestForm();
	    RobotomyRequestForm &operator=(const RobotomyRequestForm &copyObject);
	
	    virtual void execute(Bureaucrat const & executor) const;

    private:
	    std::string target;
};

#endif