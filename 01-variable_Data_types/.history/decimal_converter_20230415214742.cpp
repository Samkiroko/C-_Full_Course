#include <iostream>
using namespace std;

int main()
{
  int decimal_num;
  int binary_err[32];
  int i = 0;

  cout << "Enter a decimal number: ";
  cin >> decimal_num;

  while (decimal_num > 0)
  {
    binary_err[i] = decimal_num % 2;
    decimal_num = decimal_num / 2;
    i++;
  }
  cout << "Binary representation: ";
  for (int j = i - 1; j >= 0; j--)
  {
    cout << binary_err[j];
  }
  cout << endl;

  return 0;
}