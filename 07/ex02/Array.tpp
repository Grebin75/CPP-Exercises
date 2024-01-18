#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(new T[0]), lenght(0){}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), lenght(n){}

template <typename T>
Array<T>::Array(const Array& copy){
	lenght = 0;
	*this = copy;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& copy){

	if (lenght > 0)
		delete[] array;
	lenght = copy.lenght;
	array = new T[lenght];

	for(unsigned int i = 0; i < lenght; i++){
		array[i] = copy.array[i];
	};
	return *this;
}


template <typename T>
T& Array<T>::operator[](unsigned int n){

	if(n > size() || lenght == 0)
		throw std::exception();
	return array[n];
}

template <typename T>
unsigned int Array<T>::size() const{
	return lenght;
}

template <typename T>
Array<T>::~Array(){
	delete[] array;
}
