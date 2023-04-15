#include <iostream>

/*
 ? std::cout => print data to the console(terminal)
 ? std::cin => Reading data from the terminal
 ? std::cerr => Printing errors to the console
 ? std::clog => printing log messages to the console
 */

int main()
{
  //  print data
  std::cout << "Hello Samuel" << std::endl;
  int age{12};
  std::cout << "the age: " << age << std::endl;
  // Error log in a program
  std::cerr << "Error Message: Something is wrong" << std::endl;
  std::clog << "Log message: Something happened " << std::endl;
}