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

		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);

		Fixed &operator= (const Fixed &original);

		Fixed operator++ ();
		Fixed operator++ (int);
		Fixed operator-- ();
		Fixed operator-- (int);
		Fixed operator* (const Fixed& next);
		Fixed operator/ (const Fixed& next);
		Fixed operator+ (const Fixed& next);
		Fixed operator- (const Fixed& next);
		bool operator< (const Fixed& next);
		bool operator> (const Fixed& next);
		bool operator<= (const Fixed& next);
		bool operator>= (const Fixed& next);
		bool operator== (const Fixed& next);
		bool operator!= (const Fixed& next);



		void setRawBits(int const raw);
		int getRawBits(void) const;

		float toFloat(void) const;
		int toInt(void) const;
	


};

std::ostream& operator<<(std::ostream& out, Fixed const& value);

#endif
