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

  */
  int max{};
  int a{35};
  int b{20};

  max = (a > b) ? a : b;
  cout << "Max : " << max << endl;

  return 0;
}