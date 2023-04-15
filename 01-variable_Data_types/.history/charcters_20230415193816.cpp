#include <iostream>
#include <string>

int main()
{
  char character1{'a'};
  char character2{'r'};
  char character3{'w'};
  char character4{'t'};
  char character5{'k'};

  std::cout << character1 << std::endl;
  std::cout << character2 << std::endl;
  std::cout << character3 << std::endl;
  std::cout << character4 << std::endl;
  std::cout << character5 << std::endl;

  // One byte in memory: 2^8 = 256 different values (0 ~ 255)
  std::cout << std::endl;

  char value = 65; // ASCII character code for 'A'
  std::cout << "Value : " << value << std::endl;
  std::cout << "value(int) :" << static_cast<int>(value) << std::endl;

  return 0;
}
