//
// Created by echrysta on 7/20/22.
//

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

int Phonebook::index = 0;
int Phonebook::countContacts = 0;

void	Phonebook::add(void)
{
    if (this->countContacts == 8)
        std::cout << "Warning! Full memory!"  << std::endl;
    std::cout << "Please, put the first name: ";
    std::string	firstName;
    std::cin >> firstName;
    Phonebook::contacts[this->index].setFirstName(firstName);
    std::cout << "Please, put the last name: ";
    std::string	lastName;
    std::cin >> lastName;
    Phonebook::contacts[this->index].setLastName(lastName);
    std::cout << "Please, put the nickname: ";
    std::string	nickname;
    std::cin >> nickname;
    Phonebook::contacts[this->index].setNickname(nickname);
    std::cout << "Please, put the phone number: ";
    std::string	phoneNumber;
    std::cin >> phoneNumber;
    Phonebook::contacts[this->index].setPhoneNumber(phoneNumber);
    std::cout << "Please, put the darkest secret: ";
    std::string	darkestSecret;
    std::cin >> darkestSecret;
    Phonebook::contacts[this->index].setDarkestSecret(darkestSecret);
    this->index = (this->index + 1) % 8;
    if (this->countContacts< 8)
        this->countContacts++;
}

void	Phonebook::search()
{
    std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
    for (int i = 0; i < this->countContacts; i++)
    {
        std::cout << "|" << std::setw(10) << i;
        if (Phonebook::contacts[i].getFirstName().size() > 10)
            std::cout << "|" << std::setw(10) << Phonebook::contacts[i].getFirstName().substr(0, 9) + ".";
        else
            std::cout << "|" << std::setw(10) << Phonebook::contacts[i].getFirstName();
        if (Phonebook::contacts[i].getLastName().size() > 10)
            std::cout << "|" << std::setw(10) << Phonebook::contacts[i].getLastName().substr(0, 9) + ".";
        else
            std::cout << "|" << std::setw(10) << Phonebook::contacts[i].getLastName();
        if (Phonebook::contacts[i].getNickname().size() > 10)
            std::cout << "|" << std::setw(10) << Phonebook::contacts[i].getNickname().substr(0, 9) + ".";
        else
            std::cout << "|" << std::setw(10) << Phonebook::contacts[i].getNickname();
        std::cout << "|" << std::endl;
    }
    if (this->countContacts > 0)
    {
        std::cout << "Enter an index between 0 and " << this->countContacts - 1 << ": ";
        int		index;
        std::cin >> index;
        if (index >= 0 && index <= this->countContacts - 1)
        {
            std::cout << "First Name: " << Phonebook::contacts[index].getFirstName() << std::endl;
            std::cout << "Last Name: " << Phonebook::contacts[index].getLastName() << std::endl;
            std::cout << "Nick Name: " << Phonebook::contacts[index].getNickname() << std::endl;
            std::cout << "Phone Number: " << Phonebook::contacts[index].getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret: " << Phonebook::contacts[index].getDarkestSecret() << std::endl;
        }
        else
            std::cout << "Index out of range." << std::endl;
    }
}