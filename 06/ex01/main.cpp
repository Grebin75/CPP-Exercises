#include "Serializer.hpp"

int	main(void)
{
	s_Data test;
	

	test.text = "Test";
	test.val = 42;

	std::cout << test.text << " " << test.val << std::endl;

	uintptr_t test1 = Serializer::serialize(&test);
	s_Data *test2 = Serializer::deserialize(test1);

	std::cout << test2->text << " " << test2->val << std::endl;
}