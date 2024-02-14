#include "PmergeME.hpp"


int main(int ac, char **av){
    if (ac < 3){
        std::cout << "Input need more than 1 number." << std::endl;
        return 1;
    }
    {
        try{
            std::vector<int> vec;
            std::deque<int> deque;
            fillArgs(av, vec, deque);

            clock_t	v_init;
            clock_t	v_end;
            v_init = clock();
            sortVec(vec);
            v_end = clock() - v_init;

            int i = 0;
            for (; av[i + 1]; i++);
            std::cout << "Time to process a range of " << i << " elements with std::vector " << (((float)v_end)/CLOCKS_PER_SEC) * 10 << " us" << std::endl;
        }
        catch (std::exception &err){
            std::cerr << err.what() << std::endl;
        }
    }
     {
        try{
            std::vector<int> vec;
            std::deque<int> deque;
            fillArgs(av, vec, deque);

            clock_t	v_init;
            clock_t	v_end;
            v_init = clock();
            sortDeque(deque);
            v_end = clock() - v_init;

            int i = 0;
            for (; av[i + 1]; i++);
            std::cout << "Time to process a range of " << i << " elements with std::deque " << (((float)v_end)/CLOCKS_PER_SEC) * 10 << " us" << std::endl;
        }
        catch (std::exception &err){
            std::cerr << err.what() << std::endl;
        }
    }

}