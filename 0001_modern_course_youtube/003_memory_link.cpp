#include <iostream>

using namespace std;

int main()
{
  int *myp;

  try
  {

    myp = new int[5000];
    cout << "Memory space allocated" << endl;
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  delete[] myp;

  return 0;
}