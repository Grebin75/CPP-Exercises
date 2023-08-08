#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cstdlib>


class Fixed
{
	private:
		static const int bits = 8;
		int fixed;

	public:
		Fixed();
		Fixed(const Fixed &original);
		~Fixed();
		Fixed &operator= (const Fixed &original);
		void setRawBits(int const raw);
		int getRawBits(void) const;
};


#endif
