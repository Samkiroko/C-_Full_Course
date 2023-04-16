#include <iostream>
using namespace std;

int main()
{
  /**
   * Precedence: Which operation to do first
   * Associativity: Which direction or which order
   * */
  int a{6};
  int b{3};
  int c{8};
  int d{9};
  int e{3};
  int f{2};
  int g{5};

  int result = a / b * c + d - e + f; // 2 *8 25-1 24
  cout << "Result : " << result << endl;

  return 0;
}