#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int	value;	
		static const int bits;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();
		Fixed &operator=(const Fixed &copy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator<(const Fixed &fixedNbr) const;
	bool	operator>(const Fixed &fixedNbr) const;
	bool	operator<=(const Fixed &fixedNbr) const;
	bool	operator>=(const Fixed &fixedNbr) const;
	bool	operator==(const Fixed &fixedNbr) const;
	bool	operator!=(const Fixed &fixedNbr) const;

	Fixed	&operator++(void);	// pre
	Fixed	&operator--(void);	// pre
	Fixed	operator++(int);	// post
	Fixed	operator--(int);	// post

	Fixed	operator+(const Fixed &fixedNbr);
	Fixed	operator-(const Fixed &fixedNbr);
	Fixed	operator*(const Fixed &fixedNbr);
	Fixed	operator/(const Fixed &fixedNbr);

	static			Fixed& min(Fixed &a, Fixed &b);
	static const	Fixed& min(const Fixed &a, const Fixed &b);
	static			Fixed& max(Fixed &a, Fixed &b);
	static const	Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif