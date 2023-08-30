#include "Fixed.hpp"

int main( void ) {
Fixed a(0);
Fixed b(0);
float i = 0.00390625;
std::cout << "Float comp " << (i > 0) << std::endl;
a++;
std::cout << "Prog comp " << a.max(a, 0)<< std::endl;

/* std::cout << "Bigger " << a.max(a, b) << std::endl;
std::cout << "b is " << b << std::endl;

std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl; */

return 0;
}
