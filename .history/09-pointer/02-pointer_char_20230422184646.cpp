#include <iostream>

using namespace std;

int main()
{
  char *p_char_var{nullptr};
  char char_var{'A'};

  p_char_var = &char_var;

  cout << "The value stored in P_char_var is : " << *p_char_var << endl;

  return 0;
}