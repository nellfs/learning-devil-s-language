#include <iostream>

int main() {
  std::cout << "Enter a integer: ";
  int firstNumber{};
  std::cin >> firstNumber;

  std::cout << "Enter another integer: ";
  int secondNumber{};
  std::cin >> secondNumber;

  std::cout << firstNumber << " + " << secondNumber << " is "
            << firstNumber + secondNumber << ".\n";
  std::cout << firstNumber << " - " << secondNumber << " is "
            << firstNumber - secondNumber << ".\n";
}
