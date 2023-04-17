#include <iostream>

using namespace std;

int main()
{
  int number1{55};
  int number2{60};

  bool result = (number1 < number2);
  cout << boolalpha << "result : " << result << endl;

  std::cout << std::boolalpha << "result : " << result << std::endl;

  std::cout << std::endl;
  std::cout << "free standing if statement" << std::endl;

  // if(result){
  if (result == true)
  {
    std::cout << number1 << " is less than " << number2 << std::endl;
  }

  // if(!result){
  if (!(result == true))
  {
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
  }
