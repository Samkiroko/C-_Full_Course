#include <iostream>

int main()
{
  // // Compile time erro
  // std::cout << "value: " << value << std::endl;
  // // Run time error

  int firstNum = 12;
  int secondNum = 14;

  int sum = firstNum + secondNum;
  std::cout << "The sum is:" << sum << std::endl;
  return 0;
}