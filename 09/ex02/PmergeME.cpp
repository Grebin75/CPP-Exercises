#include "PmergeME.hpp"

Merge::Merge(char **av){
    for (int i = 1; av[i]; i++){
        if (av[i][0] == ' ')
            continue;
        if(!isdigit(av[i][0]))
            throw std::runtime_error("Invalid chars.");
        int temp = atoi(av[i]);
        if (temp < 0)
            throw std::runtime_error("Only positive integers.");
        vec.push_back(temp);
        list.push_back(temp);
    }
}