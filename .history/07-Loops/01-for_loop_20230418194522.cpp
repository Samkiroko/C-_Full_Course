#include <iostream>

using namespace std;

int main()
{

  /*
    for (unsigned int i{}; i < 10; ++i)
  {
    cout << "I love C++" << endl;
  }

  */

#include <iostream>

  int main()
  {

    for (size_t i{0}, x{5}, y{22}; y > 15; ++i, x += 5, y -= 1)
    {
      std::cout << "i: " << i << ", x : " << x << ", y : " << y << std::endl;
    }

    return 0;
  }
}