#include <iostream>

using namespace std;

int main()
{
  int arr0[]{1, 2, 3, 4, 5};
  int arr1[]{6, 7, 8, 9, 10};

  int *p_arr0 = arr0;
  int *p_arr1 = arr1;

  int *temp;

  temp = p_arr1;
  p_arr1 = p_arr0;
  p_arr0 = temp;

  cout << "arr0 value : " << arr0 << endl;
  cout << "arr1 value : " << arr1 << endl;

  return 0;
}
