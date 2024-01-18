#include "Array.hpp"

int main(){

	try {
		Array<int> a1(5);
		a1[1] = 1;

		Array<int> a2(a1);
		Array<int> a3(6);
		a3 = a1;
		
		a3[88] = 1;
	}
	catch (std::exception &err){
		std::cout << "Index out of bounds." << std::endl;
	}
}