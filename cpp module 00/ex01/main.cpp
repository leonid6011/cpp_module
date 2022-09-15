#include <iostream>
#include "Phonebook.hpp"

int	main(void)
{
    Phonebook		myPhonebook;
    std::string		str;

    while (1)
    {
        std::cout << "Phonebook" << std::endl;
        std::cout << "Enter your command here: ";
        std::cin >> str;
        if (str == "ADD")
            myPhonebook.add();
        else if (str == "SEARCH")
            myPhonebook.search();
        else if (str == "EXIT")
            return (0);
        else
            std::cout << "Invalid Command: " << str << std::endl << "Please, write with CAPSLOCK: ADD, SEARCH or EXIT" << std::endl;
    }
}