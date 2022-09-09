//
// Created by echrysta on 7/20/22.
//

#ifndef CPP_CLION_PHONEBOOK_HPP
#define CPP_CLION_PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class Phonebook {
    private:
        Contact		contacts[8];
        static	int	index;
        static	int	countContacts;
    public:
        void	add();
        void	search();

};


#endif //CPP_CLION_PHONEBOOK_HPP
