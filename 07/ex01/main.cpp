#include "inter.hpp"

int main(){
	{
		int array1[] = {123, 2, 333, 4, 5, 6};
		char array2[] = {'a', 'a', 'c', 'z'};
		//char *array = NULL;

		::inter(array1, 6, showValue);
		std::cout << " ---------- // ----------\n";
		::inter(array2, 4, showValue);

	}

}