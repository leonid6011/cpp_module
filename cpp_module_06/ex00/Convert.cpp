/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:48:42 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/27 20:25:51 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/* ======================================================== */

Convert::Convert(std::string str)
	: arguments(str)
{
	std::cout << "Default constructor has been called." << std::endl;
    this->typeArg = findType();
}

Convert::~Convert()
{
	std::cout << "Destructor has been called." << std::endl;
}

Convert::Convert(Convert const &copyObject)
{
	*this = copyObject;
	std::cout << "Copy constructor has been called." << std::endl;
}

Convert &Convert::operator=(Convert const &copyObject)
{
	if (this != &copyObject)
	{
		this->arguments = copyObject.getArguments();
	}
	std::cout << "Operator overload = has been called" << std::endl;
	return (*this);
}

/* ======================================================== */

std::string Convert::getArguments() const
{
	return (this->arguments);
}

/* ======================================================== */

bool Convert::checkEx() const {
    if (arguments == "nan" || arguments == "nanf" ||
		arguments == "+inf" || arguments == "inf" ||
		arguments == "-inf" || arguments == "+inff" ||
		arguments == "inff" || arguments == "-inff")
        return (1);
    return (0);
}

int Convert::findType()
{
	char *endPtr;
	
    for (size_t i = 0; arguments[i]; i++)
    {
        if (!isdigit(arguments[i]) && arguments[i] != '-')
            break;
        if (i == arguments.length() - 1) {
			intArg = atoi(arguments.c_str());
            return (0);
        }
    }
    if (arguments.length() == 1 && std::isprint(arguments[0]))
    {
        charArg = arguments[0];
        return (1);
    }
    else if (arguments[arguments.length() - 1] == 'f' && arguments.find('.') != std::string::npos)
    {
        arguments.erase(arguments.end() - 1);
        floatArg = strtof(arguments.c_str(), &endPtr);
		if (*endPtr != '\0')
			return (-1);
        return (2);

    }
	else if (arguments[arguments.length() - 1] != 'f' && arguments.find('.') != std::string::npos)
	{
        doubleArg = strtod(arguments.c_str(), &endPtr);
		if (*endPtr != '\0')
			return (-1);
        return (3);

    }
    else if (checkEx())
	{
        if (arguments == "inff" || arguments == "-inff" || arguments == "+inff" || arguments == "nanf")
            arguments.erase(arguments.end() - 1);
        doubleArg = strtod(arguments.c_str(), NULL);
        return (5);
    }
	return (-1);
}

void Convert::convertInt() const
{
	if (checkEx())
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	
	if (typeArg == 0)
		std::cout << "int: " << intArg << std::endl;
	else if (typeArg == 1)
		std::cout << "int: " << static_cast<int>(charArg) << std::endl;
	else if (typeArg == 2)
		std::cout << "int: " << static_cast<int>(floatArg) << std::endl;
	else if (typeArg == 3)
		std::cout << "int: " << static_cast<int>(doubleArg) << std::endl;
	else if (typeArg == -1)
		std::cout << "Invalid str input" << std::endl;
}

void Convert::convertChar() const
{
	if (checkEx())
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	
	if (typeArg == 0)
	{
		if (static_cast<char>(intArg) > 32 && static_cast<char>(intArg) < 126)
			std::cout << "char: '" << static_cast<char>(intArg) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
    }
    else if (typeArg == 1)
	{
		if (charArg > 32 && charArg < 126)
			std::cout << "char: '" << charArg << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
    else if (typeArg == 2)
	{
		if (static_cast<char>(floatArg) > 32 && static_cast<char>(floatArg) < 126)
			std::cout << "char: '" << static_cast<char>(floatArg) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
    else if (typeArg == 3)
	{
		if (static_cast<char>(doubleArg) > 32 && static_cast<char>(doubleArg) < 126)
			std::cout << "char: '" << static_cast<char>(doubleArg) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else if (typeArg == -1)
		std::cout << "Invalid str input" << std::endl;
}

void Convert::convertFloat() const
{
	if (checkEx())
	{
		std::cout << "float: " << arguments << "f" << std::endl;
		return;
	}
	if (typeArg == 0)
		std::cout << "float: " << static_cast<float>(intArg) << ".0f" << std::endl;
	else if (typeArg == 1)
		std::cout << "float: " << static_cast<float>(charArg) << ".0f" << std::endl;
	else if (typeArg == 2)
		std::cout << "float: " << floatArg << ".0f" << std::endl;
	else if (typeArg == 3)
		std::cout << "float: " << static_cast<float>(doubleArg) << ".0f" << std::endl;
	else if (typeArg == -1)
		std::cout << "Invalid str input" << std::endl;
}

void Convert::convertDouble() const
{
	if (checkEx())
	{
		std::cout << "double: " << arguments << std::endl;
		return;
	}
	if (typeArg == 0)
		std::cout << "double: " << static_cast<double>(intArg) << ".0" << std::endl;
	else if (typeArg == 1)
		std::cout << "double: " << static_cast<double>(charArg) << ".0" << std::endl;
	else if (typeArg == 2)
		std::cout << "double: " << static_cast<double>(floatArg) << ".0" << std::endl;
	else if (typeArg == 3)
		std::cout << "double: " << doubleArg << ".0" << std::endl;
	else if (typeArg == -1)
		std::cout << "Invalid str input" << std::endl;
}

/* ======================================================== */

void	Convert::display() const
{
	convertChar();
	convertInt();
	convertFloat();
	convertDouble();
}

/* ======================================================== */