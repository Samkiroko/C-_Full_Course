#include <iostream>

using namespace std;

int main()
{

  cout << "Please type in your ag  : " << endl;
  int age;
  cin >> age;

  if (age < 12)
  {
    cout << "Sorry, you are too young for the treatment." << endl;
  }
  else if (age > 39)
  {
    cout << "Sorry, you are too old for the treatment." << endl;
  }
  else
  {
    cout << "You are eligible for the treatment" << endl;
  }

  return 0;
}