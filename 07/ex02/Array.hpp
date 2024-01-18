#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>

class Array{

	private:
		T *array;
		unsigned int lenght;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array& operator=(const Array& copy);
		T& operator[](unsigned int n);
		unsigned int size() const;
		~Array();
};

#include "Array.tpp"

#endif