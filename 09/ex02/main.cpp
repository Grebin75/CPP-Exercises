#include "PmergeME.hpp"


int main(int ac, char **av){
    if (ac < 3){
        std::cout << "Input need more than 1 number." << std::endl;
        return 1;
    }
    try{
        Merge merge(av);


    }
    catch (std::exception &err){
        std::cerr << err.what() << std::endl;
    }

}