#include "PmergeME.hpp"

void fillArgs(char **av, std::vector<int> &vec, std::deque<int> &deque){
    for (int i = 1; av[i]; i++){
        if (av[i][0] == ' ')
            continue;
        for (int j = 0; av[i][j]; j++){
            if(!isdigit(av[i][j]))
                throw std::runtime_error("Invalid chars.");
        }
        int temp = atoi(av[i]);
        vec.push_back(temp);
        deque.push_back(temp);
    }

    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        for (std::vector<int>::iterator it2 = it + 1; it2 != vec.end(); it2++){
            if (*it == *it2)
                throw std::runtime_error("Duplicated numbers.");
        }
    }
}

void printVec(std::vector<int> &vec){
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void recSortVec(std::vector<std::pair<int, int> > &pairs, size_t j){
    if (j == pairs.size()) return;

    for (size_t i = 0; i < pairs.size() - 1; i++){
        if (pairs[i].first > pairs[j].first)
            std::swap(pairs[i], pairs[j]);
    }
    
    recSortVec(pairs, ++j);
}

std::vector<int> bigChainVec(std::vector<std::pair<int, int> > &pairs){
    std::vector<int> MainChain;
    
    MainChain.push_back(pairs[0].second);
    for (std::vector<std::pair<int, int> >::iterator ip = pairs.begin(); ip != pairs.end(); ip++){
         MainChain.push_back(ip->first);
    }
    return MainChain;
}



std::vector<int>	insertionVectorsSort( std::vector<std::pair<int, int> > &vectorPairs ){
	long jacobsthal[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 
	1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 
	1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 
	178956971, 357913941, 715827883, 1431655765, 2863311531, 5726623061, 11453246123};

	int	checkerIndex = vectorPairs.size();
	int	i = 0;
	long temp = 0;
	std::vector<int> sequence;

	for( ;checkerIndex > jacobsthal[i]; i++);

	if (i == 0) return sequence;
	for (int j = 0; j < i; j++) {
		temp = jacobsthal[j + 1];
		if (temp > checkerIndex)
			temp = checkerIndex;
		for(;temp > jacobsthal[j]; temp--) {
			sequence.push_back(temp);
		}
	}
	return sequence;
}


void sortVec(std::vector<int> &vec){
    bool odd = (vec.size() % 2);
    int pair = vec.size() / 2;
    int tmp = 0;

    std::cout << "Before: ";
    printVec(vec);
    std::vector<std::pair<int, int> > pairs;

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
    recSortVec(pairs, 0);
    vec = bigChainVec(pairs);

    std::vector<int>::iterator b_it;
	std::vector<int> sequence = insertionVectorsSort(pairs);
	std::vector<int>::iterator s_it = sequence.begin();


	for (; s_it != sequence.end(); s_it++) {
		b_it = vec.begin();
		while (*b_it < pairs[*s_it - 1].second){
			b_it++;
		}
		vec.insert(b_it, pairs[*s_it - 1].second);
	}

    if (odd){
        for (b_it = vec.begin(); b_it != vec.end() && *b_it < tmp; b_it++)
            ;
		vec.insert(b_it, tmp);
    }
    
    std::cout << "After: ";
    printVec(vec);
}



void printDeque(std::deque<int> &deque){
    for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

std::deque<int> bigChainDeque(std::deque<std::pair<int, int> > &pairs){
    std::deque<int> MainChain;
    
    MainChain.push_back(pairs[0].second);
    for (std::deque<std::pair<int, int> >::iterator ip = pairs.begin(); ip != pairs.end(); ip++){
         MainChain.push_back(ip->first);
    }
    return MainChain;
}

void recSortDeque(std::deque<std::pair<int, int> > &pairs, size_t j){
    if (j == pairs.size()) return;

    for (size_t i = 0; i < pairs.size() - 1; i++){
        if (pairs[i].first > pairs[j].first)
            std::swap(pairs[i], pairs[j]);
    }
    
    recSortDeque(pairs, ++j);
}

std::deque<int>	insertionDequeSort( std::deque<std::pair<int, int> > &dequePairs ){
	long jacobsthal[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 
	1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 
	1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 
	178956971, 357913941, 715827883, 1431655765, 2863311531, 5726623061, 11453246123};

	int	checkerIndex = dequePairs.size();
	int	i = 0;
	long temp = 0;
	std::deque<int> sequence;

	for( ;checkerIndex > jacobsthal[i]; i++);

	if (i == 0) return sequence;
	for (int j = 0; j < i; j++) {
		temp = jacobsthal[j + 1];
		if (temp > checkerIndex)
			temp = checkerIndex;
		for(;temp > jacobsthal[j]; temp--) {
			sequence.push_back(temp);
		}
	}
	return sequence;
}

void sortDeque(std::deque<int> &deque){
    bool odd = (deque.size() % 2);
    int pair = deque.size() / 2;
    int tmp = 0;

    std::cout << "Before: ";
    printDeque(deque);
    std::deque<std::pair<int, int> > pairs;

    std::deque<int>::iterator it = deque.begin();

    for(int i = 0; it != deque.end() && !(odd && (i == pair)); it+= 2, i++){
        pairs.push_back(std::pair<int, int>(*it, *(it + 1)));
    }
    if (odd)
        tmp = *it;

    std::deque<std::pair<int, int> >::iterator ip = pairs.begin();
    for (int i = 0; ip != pairs.end(); ip++, i++){
        if (ip->first < ip->second)
            std::swap(ip->first, ip->second);
    }
    recSortDeque(pairs, 0);
    deque = bigChainDeque(pairs);

    std::deque<int>::iterator b_it;
	std::deque<int> sequence = insertionDequeSort(pairs);
	std::deque<int>::iterator s_it = sequence.begin();


	for (; s_it != sequence.end(); s_it++) {
		b_it = deque.begin();
		while (*b_it < pairs[*s_it - 1].second){
			b_it++;
		}
		deque.insert(b_it, pairs[*s_it - 1].second);
	}

    if (odd){
        for (b_it = deque.begin(); b_it != deque.end() && *b_it < tmp; b_it++)
            ;
		deque.insert(b_it, tmp);
    }
    
    std::cout << "After: ";
    printDeque(deque);
}



