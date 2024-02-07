#ifndef PMERGEME_HPP
#define PMERGEME_HPP


#include <vector>
#include <list>

#include <string>
#include <iostream>
#include <cstdlib>

class Merge{
    private:
        std::vector<int> vec;
        std::list<int> list;
    public:
        Merge(char **av);
       /*  Merge(const Merge &copy);
        Merge& operator=(const Merge &copy);
        ~Merge(); */
};

#endif