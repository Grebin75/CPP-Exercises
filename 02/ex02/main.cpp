#include "Fixed.hpp"

int main( void ) {
Fixed a(0);
Fixed b(0);

a++;
b--;

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;

std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
return 0;
}
