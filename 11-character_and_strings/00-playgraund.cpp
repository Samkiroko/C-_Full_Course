#include <iostream>
#include <cmath>
using namespace std;

double calculateSphereVolume(double radius)
{
  double pi = 3.14159265359;
  return (4.0 / 3.0) * pi * pow(radius, 3);
}

int main()
{
  double radius = 5;

  double volume = calculateSphereVolume(radius);

  cout << "The volume of the sphere is: " << volume << endl;

  return 0;
}
