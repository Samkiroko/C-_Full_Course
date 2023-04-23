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

  // const keyword applies to variable name
  int protected_var{10};

  const int *p_protected_var{&protected_var};

  // protected_var = 66;

  cout << "Protected_var : " << protected_var << end;
  cout << "p_protected_var : " << p_protected_var << endl;
  cout << "*p_protected_var : " << *p_protected_var << endl;

  return 0;
}