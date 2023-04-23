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

  // multiple pointers to the same memory
  cout << endl;
  cout << "case 3 : multiple pointers to the same memory : ." << endl;
  int *p3{new int{100}};
  int *p4{p3};

  cout << "*p3 : " << *p3 << endl;
  cout << "*p4 : " << *p4 << endl;

  delete p3;

  cout << "*p3 : " << *p4 << endl;

  return 0;
}