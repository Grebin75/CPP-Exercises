#include "MutantStack.hpp"

template<typename T> MutantStack<T>::MutantStack(){
}

template<typename T> MutantStack<T>::MutantStack(const MutantStack& copy){
	this = copy;
}

template<typename T> MutantStack<T>& MutantStack<T>::operator=(const MutantStack& copy){
	(void)copy;
}

template<typename T> MutantStack<T>::~MutantStack(){
}

template<typename T> typename MutantStack<T>::iterator MutantStack<T>::end(){
	return this->c.end();
}

template<typename T> typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return this->c.begin();
}