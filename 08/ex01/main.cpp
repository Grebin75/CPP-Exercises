#include "Span.hpp"

int main(){
	{
		try{
			Span s1(100);

			s1.addNum(23);
			s1.addNum(22);
			s1.addNum(2434);
			s1.addNum(1);
			s1.addNum(23);
			s1.addNum(2231);
			s1.addNum(1);

			s1.printVector();
			std::cout << "LongestSpan: " << s1.longestSpan() << std::endl;
			std::cout << "ShortestSpan: " << s1.shortestSpan() << std::endl;
		}
		catch (Span::NoSpan &err){
			std::cout << "No span can be found." << std::endl;
		}
		catch (Span::MaxRange &err2){
			std::cout << "Vector limits was reached." << std::endl;
		}
	}
	{
		try{
			
			unsigned int N = 100;
			Span s1(N);
			std::vector<int> random(N);
			
			srand(time(NULL));
			std::generate(random.begin(), random.end(), std::rand);
			s1.addRange(random.begin(), random.end());

			s1.printVector();
			std::cout << "LongestSpan: " << s1.longestSpan() << std::endl;
			std::cout << "ShortestSpan: " << s1.shortestSpan() << std::endl;
		}
		catch (Span::NoSpan &err){
			std::cout << "No span can be found." << std::endl;
		}
		catch (Span::MaxRange &err2){
			std::cout << "Vector limits was reached." << std::endl;
		}


	}
}