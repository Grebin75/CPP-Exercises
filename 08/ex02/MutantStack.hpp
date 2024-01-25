#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		typedef typename std::deque<T>::iterator iterator;
		MutantStack();
		MutantStack(const MutantStack& copy);
		MutantStack& operator=(const MutantStack& copy);
		~MutantStack();
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"

#endif