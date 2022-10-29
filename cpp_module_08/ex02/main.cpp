/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:37:24 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/29 19:04:57 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// int main()
// {
//     MutantStack<int> mstack;
    
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }

int main(void)
{
	std::cout << "========================================================" << std::endl;
	MutantStack<int> stack;

	if (stack.empty())
		std::cout << "stack is empty!" << std::endl;
		
	std::cout << "========================================================" << std::endl;

	MutantStack<int> stack2;

	stack2.push(5);
    stack2.push(17);
    stack2.push(3);
    stack2.push(5);
    stack2.push(737);
		
	MutantStack<int>::iterator it = stack2.begin();
	MutantStack<int>::iterator ite = stack2.end();
		
	std::cout << "begin: " <<  *it << std::endl;
	//std::cout << "end: " <<  *ite << std::endl;
		
	++it;
	--ite;

	std::cout << std::endl;

	std::cout << "begin: " <<  *it << std::endl;
	std::cout << "end: " <<  *ite << std::endl;
	++ite;
	for (it = stack2.begin(); it != ite; ++it)
	{
		std::cout << *it << std::endl;
	}

	std::cout << "========================================================" << std::endl;

	std::stack<int> s(stack2);

	std::cout << "stack size: " <<  stack2.size() << std::endl;
	std::cout << "copy stack size: " <<  s.size() << std::endl;

	std::cout << "========================================================" << std::endl;
	
	MutantStack<int> stack3;
	
	stack3 = stack2;

	std::cout << "stack size: " <<  stack2.size() << std::endl;
	std::cout << " '=' stack size: " <<  stack3.size() << std::endl;

	std::cout << "========================================================" << std::endl;

	return 0;
}

//valgrind --leak-check=full ./MutantStack 