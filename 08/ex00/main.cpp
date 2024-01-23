#include "easyfind.hpp"

int main(){

	std::vector<int> iV;
	for (int i = 9; i > 0; i--){
		iV.push_back(i);
	}
	try{
		std::cout << easyfind(iV, 5) << std::endl;
	}
	catch(std::exception &err){
		std::cout << "The value wasnt found." << std::endl;
	}

}