
#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	fixed = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original){
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed::Fixed(const int fixed){
	std::cout << "Int constructor called" << std::endl;
	this->fixed = fixed << Fixed::bits;
}

Fixed::Fixed(const float fixed){
	std::cout << "Float constructor called" << std::endl;
	this->fixed = roundf(fixed * (1 << Fixed::bits));
}


int Fixed::getRawBits(void) const {
	return (this->fixed);
}

void Fixed::setRawBits(int const raw) {
	this->fixed = raw;
}

float Fixed::toFloat(void) const{
	return ((float)this->fixed / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const{
	return ((int)this->toFloat());
}


Fixed& Fixed::operator=(const Fixed &original){
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(original.getRawBits());
	return (*this);
}

Fixed Fixed::operator++ (){
	this->fixed++;
	return (*this);
}

Fixed Fixed::operator++ (int){
	Fixed temp(*this);

	this->fixed++;
	return temp;
}

Fixed Fixed::operator-- (){
	this->fixed--;
	return (*this);
}

Fixed Fixed::operator-- (int){
	Fixed temp(*this);

	this->fixed--;
	return temp;
}


Fixed Fixed::operator* (const Fixed& next){
	return (this->toFloat() * next.toFloat());
}

Fixed Fixed::operator/ (const Fixed& next){
	return (this->toFloat() / next.toFloat());
}

Fixed Fixed::operator- (const Fixed& next){
	return (this->toFloat() - next.toFloat());
}

Fixed Fixed::operator+ (const Fixed& next){
	return (this->toFloat() + next.toFloat());
}

bool Fixed::operator< (const Fixed& next){
	return (this->fixed < next.getRawBits());
}

bool Fixed::operator<= (const Fixed& next){
	return (this->fixed <= next.getRawBits());
}

bool Fixed::operator> (const Fixed& next){
	return (this->fixed > next.getRawBits());
}

bool Fixed::operator>= (const Fixed& next){
	return (this->fixed >= next.getRawBits());
}

bool Fixed::operator== (const Fixed& next){
	return (this->fixed == next.getRawBits());
}

bool Fixed::operator!= (const Fixed& next){
	return (this->fixed != next.getRawBits());
}



Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;	
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& out, Fixed const& value) {
    out << value.toFloat();
    return out;
}