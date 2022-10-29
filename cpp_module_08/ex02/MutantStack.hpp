/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:37:40 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/29 18:13:15 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iterator>
#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
	    MutantStack() : std::stack<T>()
        {}
	    MutantStack(const MutantStack<T> &copyObject) : std::stack<T>(copyObject)
        {}
	    ~MutantStack()
        {}
	    MutantStack<T> &operator=(const MutantStack<T> &copyObject)
        {
            std::stack<T>::operator=(copyObject);
            return (*this);
        }
	
	    typedef typename MutantStack<T>::container_type::iterator iterator;

	    iterator begin()
        {
            return this->c.begin();
        }
	    iterator end()
        {
            return this->c.end();
        }
};
