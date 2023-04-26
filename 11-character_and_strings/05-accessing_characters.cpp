#include <iostream>

using namespace std;

int main()
{
  // Reading character one by one with [] operator
  string str1 = "TO day is a nice day!!";

  cout << "For loop with array index notation : " << endl;

  cout << "str1 (for loop) : ";
  // for (size_t i{}; i < str1.length(); ++i)
  //   cout << str1[i] << " ";

  for (size_t i{}; i < str1.size(); ++i)
    cout << str1[i] << " ";
  cout << endl;

  cout << "============Range base iteration===============" << endl;

  for (char value : str1)
    cout << value << " ";
  cout << endl;

  // Reading character one by one with at() function
  cout << "========at() function==========" << endl;
  string str2 = "TO day is a nice day!!";

  cout << "str2 (for loop) : ";
  for (size_t i{}; i < str2.length(); ++i)
    cout << str2.at(i) << " ";
  cout << endl;

  // pointer to the wrapped string
  cout << "========pointer to the wrapped string==========" << endl;
  string str3 = "TO day is a nice day!!";
  const char *charPtr = str3.c_str();
  cout << "Wrapped string : " << charPtr << endl;
}
