//
// Created by echrysta on 7/20/22.
//

#include "Contact.hpp"

std::string	Contact::getFirstName(void)
{
    return (this->firstName);
}

std::string	Contact::getLastName(void)
{
    return (this->lastName);
}

std::string	Contact::getNickname(void)
{
    return (this->nickname);
}

std::string	Contact::getPhoneNumber(void)
{
    return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
    return (this->darkestSecret);
}

// Setters

void	Contact::setFirstName(std::string fn)
{
    this->firstName = fn;
}

void	Contact::setLastName(std::string ln)
{
    this->lastName = ln;
}

void	Contact::setNickname(std::string nn)
{
    this->nickname = nn;
}

void	Contact::setPhoneNumber(std::string pn)
{
    this->phoneNumber = pn;
}

void	Contact::setDarkestSecret(std::string ds)
{
    this->darkestSecret = ds;
}