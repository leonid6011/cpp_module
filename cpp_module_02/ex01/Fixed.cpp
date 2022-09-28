#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

Fixed::Fixed(const int value_input) {
	
	std::cout << "Int constructor called" << std::endl;
	this->value = value_input << bits;
}

Fixed::Fixed(const float value_input)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value_input * (float)(1 << bits));
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

	//std::cout << "getRawBits member function called" << std::endl;
	return(value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)value / (1 << bits));
}

int Fixed::toInt(void) const
{
	return (value >> bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value) {
	
	out << value.toFloat();
	return (out);
}