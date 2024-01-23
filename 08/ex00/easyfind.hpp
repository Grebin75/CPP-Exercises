#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

template <typename T> 
int easyfind(T container, int value){
	
	for(unsigned long i = 0; container.size() > i; i++){
		if(container.at(i) == value)
			return container.at(i);
	}
	throw std::exception();
}

#endif