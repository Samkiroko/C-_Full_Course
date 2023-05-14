#include <iostream>

using namespace std;

int lifeUp()
{
  static int life = 3;
  return ++life;
}

int main()
{
  /*
   * modification qualifier const, volatile, mutable
   * Life duration qualifier static, extern, register
   */
  int life = 3;
  cout << "Your life is: " << life << endl;
  cout << "Your life is: " << lifeUp() << endl;
  cout << "Your life is: " << lifeUp() << endl;
}