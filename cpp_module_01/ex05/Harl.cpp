#include "Harl.hpp"

void Harl::debug(void) 
{
	std::cout << "[debug]   I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void) 
{
	std::cout << "[info]    I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void) 
{
	std::cout << "[warning] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void) 
{
	std::cout << "[error]   This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	void        (Harl::*allPointerFun[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i = 0;

	while (i != 4)
    {
		if (levels[i] == level)
		{
			(this->*allPointerFun[i])();
			break ;
		}
        i++;
	}
}