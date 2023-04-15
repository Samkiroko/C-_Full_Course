#include <iostream>
#include <string>

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

  // Getting data from the uuser Name and age
  // int age1;
  // std::string name;

  // std::cout << "Please type your name and age: " << std::endl;

  // // std::cin >> name;
  // // std::cin >> age1;
  // std::cin >> name >> age1;

  // std::cout << "Hello " << name << " you are " << age1 << " Years old!" << std::endl;

  // Data with space
  std::string full_name;
  int age3;

  std::cout << "Please type your name and age: " << std::endl;
  std::getline(std::cin, full_name);
  std::cin >> age3;

  std::cout << "Hello " << full_name << " You are  "
            << age3 << " Years old!" << std::endl;

  return 0;
}