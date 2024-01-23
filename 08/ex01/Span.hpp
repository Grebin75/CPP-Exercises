#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	private:
		unsigned int _N;
	public:
		std::vector<int> iV;
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		Span& operator=(const Span& copy);
		void addNum(int i);
		long	shortestSpan();
		long	longestSpan();
		~Span();

		class MaxRange : public std::exception{
		};

		class NoSpan : public std::exception{
		};
};


#endif