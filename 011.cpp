#include <iostream>

void printDigitName(int x) {
  switch (x) {
  case 1:
    std::cout << "One";
    return;
  case 2:
    std::cout << "Two";
    return;
  default:
    std::cout << "Unknow";
    return;
  }
}

int main(){
  printDigitName(2);
  std::cout << '\n';
  return 0;
}
