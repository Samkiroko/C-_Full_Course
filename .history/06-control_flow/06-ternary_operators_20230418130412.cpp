#include <iostream>

using namespace std;

int main()
{
  /*
   if (condition){
    result = option1;
   }else{
    result = option2;
   }

  ? Ternary operator
  result = (condition) ? option1 : option2;

  must be of the same type or convertible type

  */
  int max{};
  int a{35};
  int b{20};

  max = (a > b) ? a : b;
  cout << "Max : " << max << endl;

  cout << endl;
  cout << "speed" << endl;
  bool fast = false;

  int speed{fast ? 300 : 150};

  cout << "The speed is : " << speed << endl;
  return 0;
}
