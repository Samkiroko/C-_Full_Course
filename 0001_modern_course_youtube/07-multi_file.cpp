// Author: Samuel Kiroko Njenga
// Copyright © 2023 lytxcode. All rights reserved.

#include <iostream>
#include "header.h"

using namespace std;

// calculator with 4 functions
// add, subtract, multiply, divide

int main()
{
  int a = 10;
  int b = 5;

  cout << "Addition: " << add(a, b) << endl;
  cout << "Subtraction: " << subtract(a, b) << endl;
  cout << "Multiplication: " << multiply(a, b) << endl;
  cout << "Division: " << divide(a, b) << endl;

  return 0;
}