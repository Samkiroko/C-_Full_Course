#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  cout << "Welcome to box calculator. Please type in Length, width and height information : " << endl;
  double length;
  cin >> length;
  cout << "Length : " << length << endl;
  double width;
  cin >> width;
  cout << "width : " << width << endl;
  double height;
  cin >> height;
  cout << "height : " << height << endl;

  double baseArea = width * length;
  cout << "The base is : " << baseArea << endl;

  return 0
}