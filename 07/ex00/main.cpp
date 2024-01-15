#include "whatever.hpp"

int main(){

	{
		int A = 1;
		int B = 1;


		swap(A, B);
		std::cout << "A Address: " << &A << "\nB Address: " << &B << std::endl;
		std::cout << "A: " << A << " | B: " << B << std::endl;
		std::cout << &max(A, B) << std::endl;
		std::cout << &min(A, B) << std::endl;
	}
	{
		char A = 'A';
		char B = 'B';
		
		swap(A, B);	
		std::cout << A << " | " << B << std::endl;
		std::cout << max(A, B) << std::endl;
		std::cout << min(A, B) << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		return 0;
	}
}