#include <iostream>

int main()
{
    int firstNumber{};
    int secondNumber{};

    std::cout << "Enter a integer: ";
    std::cin >> firstNumber;
    std::cout << "Enter another integer: ";
    std::cin >> secondNumber;
    std::cout << firstNumber << " + " << secondNumber << " is " << firstNumber + secondNumber << ".\n";
    std::cout << firstNumber << " - " << secondNumber << " is " << firstNumber - secondNumber << ".\n";
}
