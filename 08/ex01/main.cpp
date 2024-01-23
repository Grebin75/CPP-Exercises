#include "Span.hpp"

int main(){
	try{
		Span s1(100);

		s1.addNum(23);
		s1.addNum(22);
		s1.addNum(2434);
		s1.addNum(1);
		s1.addNum(23);
		s1.addNum(2231);
		s1.addNum(1);

		/* for(unsigned int i = 0; i < s1.iV.size() - 1; i++){
			std::cout << s1.iV.at(i) << " ";
		}; */
		std::cout << s1.longestSpan() << std::endl;
		std::cout << s1.shortestSpan() << std::endl;
	}
	catch (Span::NoSpan &err){
		std::cout << "No span can be found." << std::endl;
	}
	catch (Span::MaxRange &err2){
		std::cout << "Vector limits was reached." << std::endl;
	}
}