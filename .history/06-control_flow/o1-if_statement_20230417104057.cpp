#include <iostream>

using namespace std;

int main()
{
  int number1{55};
  int number2{60};

  bool result = (number1 < number2);
  cout << boolalpha << "result : " << result << endl;
}