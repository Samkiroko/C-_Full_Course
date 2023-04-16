#include <iostream>
using namespace std;

int main()
{
  cout << "=====Postfix increment and decrement=====" << endl;
  int value{5};
  cout << "The value is (incrementing) : " << value++ << endl;
  cout << "The value is : " << value << endl;

  cout << endl;

  cout << "=====Prefix increment and decrement=====" << endl;
  value = 5;
  cout << "The value is (incrementing) : " << ++value << endl;
  cout << "The value is : " << value << endl;

  cout << endl;

  return 0;
}