#include "PmergeME.hpp"

void fillArgs(char **av, std::vector<int> &vec, std::list<int> &list){
    for (int i = 1; av[i]; i++){
        if (av[i][0] == ' ')
            continue;
        for (int j = 0; av[i][j]; j++){
            if(!isdigit(av[i][j]))
                throw std::runtime_error("Invalid chars.");
        }
        int temp = atoi(av[i]);
        vec.push_back(temp);
        list.push_back(temp);
    }

    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        for (std::vector<int>::iterator it2 = it + 1; it2 != vec.end(); it2++){
            if (*it == *it2)
                throw std::runtime_error("Duplicated numbers.");
        }
    }
}

void print(std::vector<int> &vec){
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void sortVec(std::vector<int> &vec){
    if (vec.size() <= 1) 
        return;

    int mid = vec.size() / 2;
    std::vector<int> left(vec.begin(), vec.begin() + mid);
    std::vector<int> right(vec.begin() + mid, vec.end());

    sortVec(left);
    sortVec(right);
    merge(left.begin(), left.end(), right.begin(), right.begin(), vec.begin());
}
