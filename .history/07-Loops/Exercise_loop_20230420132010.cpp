#include <iostream>

using namespace std;

int main()
{

  char operation;
  double operand1;
  double operand2;
  bool end{false};

  cout << "Welcome to Awesome Calculator" << endl;

  while ((end == false))
  {
    //  Do some processing

    cout << "Continue ? (Y | N) : ";

    char go_on;
    cin >> go_on;

    if ((go_on == 'Y') || (go_on == 'y'))
    {
      end = false;
    }
    else
    {
      end = true;
    }
  }
}
