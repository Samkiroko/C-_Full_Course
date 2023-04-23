#include <iostream>

using namespace std;

int main()
{
  // Non initialized pointer
  int *p1; // p1 is a dangling pointer

  cout << endl;
  cout << "case 1 : uninitialized pointer : ." << endl;
  cout << "p1 : " << p1 << endl;

  return 0;
}