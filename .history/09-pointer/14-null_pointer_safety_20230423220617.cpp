#include <iostream>

using namespace std;

int main()
{
  //  verbose nullptr check

  int *p_number{};

  if (p_number != nullptr)
  {
    cout << "The value of p_number is : " << *p_number << endl;
  }
  else
  {
    cout << "p_number is a null pointer" << endl;
  }

  return 0;
}