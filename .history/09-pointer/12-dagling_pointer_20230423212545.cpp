#include <iostream>

using namespace std;

int main()
{
  // Non initialized pointer
  int *p1; // p1 is a dangling pointer

  cout << endl;
  cout << "case 1 : uninitialized pointer : ." << endl;
  cout << "p1 : " << p1 << endl;

  // deleted pointer

  cout << endl;
  cout << "case 2 : deleted pointer : ." << endl;
  int *p2{new int{100}};

  cout << "*p(before delete) : " << *p2 << endl;

  delete p2;
  cout << "*p(after delete) : " << *p2 << endl;

  return 0;
}