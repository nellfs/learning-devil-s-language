#include <iostream>

void fizzBuzz(int times) {
  for (int i{1}; i <= times; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      std::cout << "fizbuzz\n";
    } else if (i % 3 == 0) {
      std::cout << "fizz\n";
    } else if (i % 5 == 0) {
      std::cout << "buzz\n";
    } else {
      std::cout << i << '\n';
    }
  }
}

int main() { fizzBuzz(15); }
