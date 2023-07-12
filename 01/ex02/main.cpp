# include <string>
# include <iostream>
# include <cstdlib>

typedef std::string	str;

int main()
{
	str string = "HI THIS IS BRAIN";
	str *pointer = &string;
	str &ref = string;

	std::cout << "ADDRESS:\n";
	std::cout << "String: " << &string << std::endl;
	std::cout << "Pointer: " << &pointer << std::endl;
	std::cout << "Ref: " << &ref << std::endl;

	std::cout << "Value:\n";
	std::cout << "String: " << string << std::endl;
	std::cout << "Pointer: " << *pointer << std::endl;
	std::cout << "Ref: " << ref << std::endl;


}