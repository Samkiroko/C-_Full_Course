#include <iostream>

using namespace std;

int main()
{
  // int bag_of_values[]{1, 2, 3, 4, 5, 6, 7, 8};

  // for (int value : bag_of_values)
  // {
  //   cout << "Value : " << value << endl;
  // }

  const unsigned int COUNT{10};

  unsigned int i{0};

  while (i < COUNT)
  {
    cout << "I love c++ " << endl;
    ++i;
  }

  return 0;
}