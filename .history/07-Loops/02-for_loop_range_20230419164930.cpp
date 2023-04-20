#include <iostream>

using namespace std;

int main()
{
  int bag_of_values[]{1, 2, 3, 4, 5, 6, 7, 8};

  for (int value : bag_of_values)
  {
    cout << "Value : " << endl;
  }

  return 0;
}