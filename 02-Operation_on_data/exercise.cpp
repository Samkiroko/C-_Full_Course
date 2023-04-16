#include <iostream>
#include <cmath>

int main()
{
  double s;
  std::cout << "Enter the length of a side of the hexagon: ";
  std::cin >> s;

  double area = (3 * std::sqrt(3) * s * s) / 2;

  std::cout << "The area of the hexagon is " << area << std::endl;

  return 0;
}
