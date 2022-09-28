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
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif