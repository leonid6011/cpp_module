#include "Harl.hpp"

void Harl::debug(void) 
{
	std::cout << "[debug]   I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) 
{
	std::cout << "[info]    I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) 
{
	std::cout << "[warning] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) 
{
	std::cout << "[error]   This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    int         i;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (i < 4)
	{
		if (level == levels[i])
			break;
		i++;
	}
    switch (i)
    {
		case 0:
            debug();
            __attribute__ ((fallthrough));
		case 1: {
            info();
        }   __attribute__ ((fallthrough));
		case 2:
            warning();
            __attribute__ ((fallthrough));
		case 3:
            error();
            break;
        default: 
			std::cout << "Error! Enter: DEBUG, INFO, WARNING or ERROR with CAPSLOCK!" << std::endl;
            break;
    }
}

