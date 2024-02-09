#include "PmergeME.hpp"


int main(int ac, char **av){
    if (ac < 3){
        std::cout << "Input need more than 1 number." << std::endl;
        return 1;
    }
    try{
        std::vector<int> vec;
        std::list<int> list;
        fillArgs(av, vec, list);
        std::cout << "Before: ";
        print(vec);
        sortVec(vec);
        std::cout << "After: ";
        print(vec);
    }
    catch (std::exception &err){
        std::cerr << err.what() << std::endl;
    }

}