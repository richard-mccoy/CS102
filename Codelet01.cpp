#include <iostream>

int main() {
  int value1 = 0;
  int value2 = 0;
  
  std::cout << "Enter one integer: ";
  std::cin >> value1;

  std::cout << "Enter another integer: ";
  std::cin >> value2;

  int value3 = value1 + value2;
  std::cout << "Their sum is " << value3;
}