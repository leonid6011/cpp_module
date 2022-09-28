#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::bits = 8;

Fixed::Fixed()
{
	value = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value_input) {
	
	//std::cout << "Int constructor called" << std::endl;
	this->value = value_input << bits;
}

Fixed::Fixed(float const value_input)
{
	//std::cout << "Float Constructor Called" << std::endl;
	this->value = roundf(value_input * (float)(1 << bits));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {

	//std::cout << "Copy assignment operator called" << std::endl;
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

//*-------------------------------------*//

bool Fixed::operator>(const Fixed &fixedNbr) const
{
	if (this->value > fixedNbr.value)
		return true;
	else
		return false;
}
bool Fixed::operator<(Fixed const &fixedNbr) const
{
	if (value < fixedNbr.value)
		return true;
	else
		return false;
}
bool Fixed::operator>=(Fixed const &fixedNbr) const
{
	if (this->value >= fixedNbr.value)
		return true;
	else
		return false;
}
bool Fixed::operator<=(Fixed const &fixedNbr) const
{
	if (value <= fixedNbr.value)
		return true;
	else
		return false;
}
bool Fixed::operator==(Fixed const &fixedNbr) const
{
	return value == fixedNbr.value;
}
bool Fixed::operator!=(Fixed const &fixedNbr) const
{
	return value != fixedNbr.value;
}

//*-------------------------------------*//

Fixed &Fixed::operator++(void)
{
	(this->value)++;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	(this->value)++;
	return tmp;
}
Fixed &Fixed::operator--(void)
{
	(this->value)--;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	(this->value)--;
	return tmp;
}

//*-------------------------------------*//

Fixed Fixed::operator+(Fixed const &fixedNbr)
{
	Fixed newFixed(toFloat() + fixedNbr.toFloat());
	return newFixed;
}
Fixed Fixed::operator-(Fixed const &fixedNbr)
{
	Fixed newFixed(toFloat() - fixedNbr.toFloat());
	return newFixed;
}
Fixed Fixed::operator*(Fixed const &fixedNbr)
{
	Fixed newFixed(toFloat() * fixedNbr.toFloat());
	return newFixed;
}
Fixed Fixed::operator/(Fixed const &fixedNbr)
{
	Fixed newFixed(toFloat() / fixedNbr.toFloat());
	return newFixed;
}

//*-------------------------------------*//

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

//*-------------------------------------*//

std::ostream &operator<<(std::ostream &out, const Fixed &valueNbr) {
	
	out << valueNbr.toFloat();
	return (out);
}