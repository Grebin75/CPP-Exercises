#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>


class Fixed
{
	private:
		static const int bits = 8;
		int fixed;

	public:
		Fixed();
		Fixed(const Fixed &original);
		Fixed(const int fixed);
		Fixed(const float fixed);
		~Fixed();
		Fixed &operator= (const Fixed &original);
		void setRawBits(int const raw);
		int getRawBits(void) const;
		float toFloat(void) const;
		int toInt(void) const;


};

std::ostream& operator<<(std::ostream& out, Fixed const& value);

#endif
