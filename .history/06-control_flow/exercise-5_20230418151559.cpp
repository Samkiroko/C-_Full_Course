#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x, y;
  const double RECT_WIDTH = 20.0;
  const double RECT_HEIGHT = 10.0;

  cout << "Enter your location point (x, y): ";
  cin >> x >> y;

  if (abs(x) <= RECT_WIDTH / 2.0 && abs(y) <= RECT_HEIGHT / 2.0)
  {
    cout << "You are completely surrounded. Don't move!" << endl;
  }
  else
  {
    cout << "You're out of reach!" << endl;
  }

  return 0;
}
