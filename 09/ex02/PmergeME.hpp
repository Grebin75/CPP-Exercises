#ifndef PMERGEME_HPP
#define PMERGEME_HPP


#include <vector>
#include <list>

#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>

void fillArgs(char **av, std::vector<int> &vec, std::list<int> &list);
void print(std::vector<int> &vec);
void sortVec(std::vector<int> &vec);
#endif