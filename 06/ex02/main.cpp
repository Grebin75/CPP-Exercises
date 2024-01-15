#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <iostream>


Base *generate(void)
{
	int	random;
	random = 1 + rand() % 3;
	switch (random)
	{
		case 1:
			std::cout << "Created a pointer of type A\n";
			return new A();
		case 2:
			std::cout << "Created a pointer of type B\n";
			return new B();
		case 3:
			std::cout << "Created a pointer of type C\n";
			return new C();
		default:
			std::cout << "Failed to create a pointer\n";
			return NULL;
	}
}


void identify(Base *p){
	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	if (a)
		return (void)(std::cout << "Pointer p is of type A\n");
	if (b)
		return (void)(std::cout << "Pointer p is of type B\n");
	if (c)
		return (void)(std::cout << "Pointer p is of type C\n");
	(std::cout << "Pointer p is not of type A, B or C\n");
}
void identify(Base &p){
	try{
		(void) dynamic_cast<A&>(p);
		std::cout << "Reference p is type A\n";
	}
	catch (const std::bad_cast &err){
		try{
			(void) dynamic_cast<B&>(p);
			std::cout << "Reference p is type B\n";
		}
		catch (const std::bad_cast &err){
			try{
				(void) dynamic_cast<C&>(p);
				std::cout << "Reference p is type C\n";
			}
			catch (const std::bad_cast &err){
				std::cout << "Reference p is not type A, B or C\n";
			}
		}

	}
}

int	main(void)
{
	Base	*p;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		p = generate();

		identify(p);
		identify(*p);
		if (p)
			delete p;
		std::cout << std::endl;
	}
}

