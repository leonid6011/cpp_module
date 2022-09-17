#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl        HarlMessage;

	if (argc != 2)
	{
		std::cerr << "Error! Enter: DEBUG, INFO, WARNING or ERROR with CAPSLOCK!" << std::endl;
		return (1);
	}
    std::string level = argv[1];
	HarlMessage.complain(level);
    return (0);
}

