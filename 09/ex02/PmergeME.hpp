#ifndef PMERGEME_HPP
#define PMERGEME_HPP


#include <vector>
#include <deque>

#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>

void fillArgs(char **av, std::vector<int> &vec, std::deque<int> &list);
void sortVec(std::vector<int> &vec);
void sortDeque(std::deque<int> &deque);
#endif