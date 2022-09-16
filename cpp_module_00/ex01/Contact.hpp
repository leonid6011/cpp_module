#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string	firstName;
        std::string	lastName;
        std::string	nickname;
        std::string	phoneNumber;
        std::string	darkestSecret;
    public:
        std::string	getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        void		setFirstName(std::string fn);
        void		setLastName(std::string ln);
        void		setNickname(std::string nn);
        void		setPhoneNumber(std::string pn);
        void		setDarkestSecret(std::string ds);
};

#endif 
