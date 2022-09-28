#include "Fixed.hpp"
#include <iostream>

const int Fixed::bits = 8;

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &copy) {
		return (*this);
	}
	else {
		value = copy.getRawBits();
		return(*this);
	}
}

int Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return(value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}