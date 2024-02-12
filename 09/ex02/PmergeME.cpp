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

void recSort(std::vector<std::pair<int, int> > &pairs, size_t j){
    if (j == pairs.size()) return;

    for (size_t i = 0; i < pairs.size() - 1; i++){
        if (pairs[i].first > pairs[j].first)
            std::swap(pairs[i], pairs[j]);
    }
    
    recSort(pairs, ++j);
}

void bigChain(std::vector<std::pair<int, int> > &pairs, bool odd, int i){
    std::vector<int> MainChain;
   (void)odd;
    MainChain.push_back(pairs[0].second);
    for (std::vector<std::pair<int, int> >::iterator ip = pairs.begin(); ip != pairs.end(); ip++){
         MainChain.push_back(ip->first);
    }
    print(MainChain);
}

void sortVec(std::vector<int> &vec){
    bool odd = (vec.size() % 2);
    int pair = vec.size() / 2;
    int tmp = 0;

    std::vector<std::pair<int, int> > pairs;
   // print(vec);
    std::vector<int>::iterator it = vec.begin();

    for(int i = 0; it != vec.end() && !(odd && (i == pair)); it+= 2, i++){
        pairs.push_back(std::pair<int, int>(*it, *(it + 1)));
    }
    if (odd)
        tmp = *it;

    std::vector<std::pair<int, int> >::iterator ip = pairs.begin();
    for (int i = 0; ip != pairs.end(); ip++, i++){
        if (ip->first < ip->second)
            std::swap(ip->first, ip->second);
    }
    recSort(pairs, 0);
    bigChain(pairs, odd, tmp);
    for (std::vector<std::pair<int, int> >::iterator ip = pairs.begin(); ip != pairs.end(); ip++){
        std::cout << "A: " << ip->first << " B: " << ip->second << std::endl;
    }
    //merge(left.begin(), left.end(), right.begin(), right.begin(), vec.begin());
}
