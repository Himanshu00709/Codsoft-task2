#include <iostream>

int main() {
    double num1, num2;
    char operation;
    // Himanshu Garg - Basic Calculator in C++
    std::cout << "Simple Calculator\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation) {
        case '+':
            std::cout << "Result: " << (num1 + num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << (num1 - num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << (num1 * num2) << std::endl;
            break;
        case '/':
            if (num2 != 0)
                std::cout << "Result: " << (num1 / num2) << std::endl;
            else
                std::cout << "Error: Division by zero is not allowed.\n";
            break;
        default:
            std::cout << "Invalid operator!\n";
    }

    return 0;
}
