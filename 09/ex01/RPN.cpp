#include "RPN.hpp"

void calc(std::stack<long> &stack, char input){
   
    if (stack.size() < 2 )
        throw std::runtime_error("Missing numbers.");
    long num2 = stack.top();
    stack.pop();
    long num1 = stack.top();
    stack.pop();
    switch (input){
    case '+':
        stack.push(num1 + num2);
        break;
    case '-':
        stack.push(num1 - num2);
        break;
    case '/':
        if (num2 == 0)
            throw std::runtime_error("You cant divide by 0");
        stack.push(num1 / num2);
        break;
    case '*':
        stack.push(num1 * num2);
        break;
  }

}

void RPN(char *input){
    std::stack<long> stack;

    for (int i = 0; input[i]; i++){
        if(input[i] == ' ')
            continue;
        if(input[i + 1] && input[i + 1] != ' ')
           throw std::runtime_error("Missing spaces."); 
        if (isdigit(input[i])){
            stack.push(atoi(&input[i]));
            continue;
        }
        if (input[i] == '+' || input[i] == '-' ||
        input[i] == '*' || input[i] == '/' ){
            calc(stack, input[i]);
            continue;
        }
        std::cout << input[i] << std::endl;
        throw std::runtime_error("Invalid Chars.");
    }
    if (stack.size() != 1)
        throw std::runtime_error("Missing operators.");
    std::cout << stack.top() << std::endl;
}
