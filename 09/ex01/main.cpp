#include "RPN.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cerr << "Error" << std::endl;
        return 1;
    }
    try{
        RPN(av[1]);
    }
    catch (std::exception &err){
        std::cerr << err.what() << std::endl;
    }
}