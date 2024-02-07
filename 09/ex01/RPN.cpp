#include "RPN.hpp"

void calc(std::stack<int> &stack, char input){
   
    if (stack.size() != 2 && stack.size() != 3)
        throw std::runtime_error("Missing numbers.");

    int num2 = stack.top();
    stack.pop();
    int num1 = stack.top();
    stack.pop();

    char operation[] = { '+', '-', '/', '*'};
    int i;

    for (i = 0; i < 4; i++){
    if (input == operation[i])
        break;
    }

    switch (i){
    case 0:
        stack.push(num1 + num2);
        break;
    case 1:
        stack.push(num1 - num2);
        break;
    case 2:
        if ((num1 == 0) || (num2 ==0))
            throw std::runtime_error("You cant divide by 0");
        stack.push(num1 / num2);
        break;
    case 3:
        stack.push(num1 * num2);
        break;
  }

}

void RPN(char *input){
    std::stack<int> stack;

    for (int i = 0; input[i]; i++){
        if(isspace(input[i]))
            continue;
        if (isdigit(input[i]) && stack.size() < 4){
            stack.push(atoi(&input[i]));
            continue;
        }
        if (input[i] == '+' || input[i] == '-' ||
        input[i] == '*' || input[i] == '/' ){
            calc(stack, input[i]);
            continue;
        }
        throw std::runtime_error("Invalid Chars.");
    }
    if (stack.size() != 1)
        throw std::runtime_error("Missing operators.");
    std::cout << stack.top() << std::endl;
}
