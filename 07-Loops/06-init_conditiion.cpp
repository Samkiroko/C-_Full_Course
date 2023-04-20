#include <iostream>

using namespace std;

int main()
{
  for (auto multiplier{4}; int value : {12, 3, 45, 6, 78})
  {
    cout << "result : " << (value * multiplier) << endl;
  }

  return 0;
}