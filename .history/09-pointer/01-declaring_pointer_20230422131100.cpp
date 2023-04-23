#include <iostream>

int main()
{
  int int_var{43};
  int *p_int{&int_var};

  std::cout << "Int var : " << int_var << std::endl;
  std::cout << "P_int (address in memory) : " << p_int << std::endl;

  return 0;
}
