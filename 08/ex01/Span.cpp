#include "Span.hpp"


Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N){}

Span::Span(const Span& copy){
	*this = copy;
}

Span& Span::operator=(const Span& copy){
	_N = copy._N;

	if (copy.iV.empty())
		return *this;
	iV = copy.iV;
	return *this;
}

void Span::addNum(int i){
	if (iV.size() >= _N)
		throw MaxRange();
	iV.push_back(i);
}

long Span::longestSpan(){
	if(_N <= 1)
		throw NoSpan();

	Span temp(*this);

	std::sort(temp.iV.begin(), temp.iV.end());
	return (long)*max_element(iV.begin(),iV.end()) - (long)*min_element(iV.begin(),iV.end());
}

long Span::shortestSpan(){
	if(_N <= 1)
		throw NoSpan();

	Span temp(*this);

	std::sort(temp.iV.begin(), temp.iV.end());
	return (long)temp.iV.at(1) - (long)temp.iV.at(0);
}

Span::~Span(){}