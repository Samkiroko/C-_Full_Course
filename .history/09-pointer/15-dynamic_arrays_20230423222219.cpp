#include <iostream>

using namespace std;

int main()
{
  // Array dynamic allocation

  double *p_salaries{new double[size]}; // salaries will contain garbage values

  int *p_students{new (nothrow) int[size]{}}; // all values will be 0

  double *p_score{new (nothrow) double[5]{1.0, 2.0, 3.0, 4.0, 5.0}};

  return 0;
}