#include <iostream>

int main(int argc, char const **argv)
{
    int             i;
    unsigned long   len;
    unsigned long   j;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            std::string str = argv[i];
            len = str.length();
            for (j = 0; j < len; j++)
                std::cout << (char)std::toupper(str[j]);
        }
        std::cout << std::endl;
    }
    return (0);
}
