#ifndef INTER_HPP
#define INTER_HPP

#include <iostream>
#include <string>

template <typename T> void inter(T *array, unsigned int len, void (*f)(T &data)){
	if (!array)
		return ;
	for (unsigned int i = 0; i < len; i++){
		f(array[i]);
	}
}

template <typename T> void showValue(T &value){
	std::cout << value << std::endl;
}
#endif