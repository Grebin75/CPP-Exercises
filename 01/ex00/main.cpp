#include "Zombie.hpp"

int main()
{
		std::string *matrix;
		matrix = new std::string[5];

		matrix[0] = "asdasda";
		matrix[1] = "2";
		matrix[2] = "3";
		matrix[3] = "4";
		matrix[4] = "5";

		std::cout << matrix[2];

		delete [] matrix;
}