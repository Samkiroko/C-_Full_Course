#include <iostream>

using namespace std;

int main()
{
  cout << "Please type in an integral value : " << endl;

  int number{};
  cin >> number;

  if (number % 2 == 0)
  {
    cout << number << " is even" << endl;
  }
  else
  {
    cout << number << " is odd" << endl;
  }

  return 0;
}
