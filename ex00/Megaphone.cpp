//
// Created by echrysta on 7/20/22.
//

#include <iostream>

int main(int argc, char const **argv)
{
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else {
        for (int i = 1; i < argc; i++) {
            std::string str(argv[i]);
            unsigned long len = str.length();
            for (unsigned long j = 0; j < len; j++)
                std::cout << (char)std::toupper(str[j]);
        }
        std::cout << std::endl;
    }
    return (0);
}
