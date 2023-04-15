#include <iostream>

consteval int get_value(){
  return 3;
}

int main(){
  constexpr int value = get_value();
  // std::cout << "Hello World" << std::endl;
  // std::cout << "Hello World1" << std::endl;
  // std::cout << "Hello World2" << std::endl;
  return 0;
}