/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:24:47 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/27 00:14:04 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
    {
		std::cout << "<pointer> This is class A!" << std::endl;
    }
	else if (dynamic_cast<B*>(p) != NULL)
    {
		std::cout << "<pointer> This is class B!" << std::endl;
    }
	else if (dynamic_cast<C*>(p) != NULL)
    {
		std::cout << "<pointer> This is class C!" << std::endl;
    }
    else
    {
		std::cout << "<pointer> Type not found!" << std::endl;
    }
}

void identify(Base &p) {
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "<reference> This is class A!" << std::endl;
    }
    catch(const std::exception &e)
    {}
    
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "<reference> This is class B!" << std::endl;
    }
    catch(const std::exception &e)
    {}

    try
    {
        dynamic_cast<C&>(p);
        std::cout << "<reference> This is class C!" << std::endl;
    }
    catch(const std::exception &e)
    {}
}

Base *generate(void)
{
    srand((unsigned int)time(NULL));
	switch (rand() % 3)
    {
		case 0:
        {
			return (new A());
		}
		case 1:
        {
			return (new B());
		}
		case 2:
        {
			return (new C());
		}
	}
	return NULL;
}

int main(void)
{
	Base *ptr = generate();

	identify(ptr);
	identify(*ptr);

	delete ptr;
}
