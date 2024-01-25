#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span{
	private:
		unsigned int _N;
		std::vector<int> iV;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		Span& operator=(const Span& copy);
		void	addNum(int i);
		void 	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		long	shortestSpan();
		long	longestSpan();
		void	printVector();
		~Span();

		class MaxRange : public std::exception{
		};

		class NoSpan : public std::exception{
		};
};


#endif