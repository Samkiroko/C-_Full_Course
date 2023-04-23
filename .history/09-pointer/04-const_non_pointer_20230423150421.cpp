#include <iostream>

using namespace std;

int main()
{
  //  Non const pointer to non const data
  int *p_number1{nullptr};
  int number1{23};

  p_number1 = &number1;

  // change the pointer to value through pointer
  *p_number1 = 432;

  // Change the pointer itself to make point somewhere else.
  int number2{56};
  p_number1 = &number2;

  cout << "The current pointer address is : " << p_number1 << endl;
  cout << "The current pointer value  is : " << *p_number1 << endl;

  return 0;
}