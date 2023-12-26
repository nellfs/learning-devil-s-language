#include <iostream>

int getValueFromUser() {
  std::cout << "Enter an integer: ";
  int input {};
  std::cin >> input;
  return input;
}

void printDouble(int num) {
  std::cout << num << " double is: " << num * 2 << "\n";
}

int main() {
  int num {getValueFromUser()};

  printDouble(num);

  return 0;
}
