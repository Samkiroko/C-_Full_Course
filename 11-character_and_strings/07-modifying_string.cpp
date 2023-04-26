#include <iostream>

using namespace std;

int main()
{
  // clear : Remove all characters from the string
  cout << "========clear()==========" << endl;
  string str1 = "Hello World";
  cout << "str1 : " << str1 << endl;
  cout << "str1 size : " << str1.size() << endl;
  cout << "str1 capacity : " << str1.capacity() << endl;

  cout << "str1.clear() : " << endl;
  str1.clear();

  cout << "str1 : " << str1 << endl;
  cout << "str1 size : " << str1.size() << endl;
  cout << "str1 capacity : " << str1.capacity() << endl;

  // insert characters(s) at index

  cout << "========insert()==========" << endl;
  string str2 = "Hello World";
  cout << "str2 : " << str2 << endl;
  cout << "str2 size : " << str2.size() << endl;
  cout << "str2 capacity : " << str2.capacity() << endl;

  cout << "str2.insert(5, \" \") : " << endl;
  str2.insert(5, " & ");
  cout << "str2 : " << str2 << endl;

  // insert C_string at index

  cout << "========insert()==========" << endl;
  string str3 = "Hello World";
  const char *cstr = " Samuel kiroko  ";
  cout << "str3 : " << str3 << endl;
  cout << "str3 size : " << str3.size() << endl;
  cout << "str3 capacity : " << str3.capacity() << endl;

  cout << "str3.insert(5, cstr) : " << endl;
  str3.insert(5, cstr);
  cout << "str3 : " << str3 << endl;

  // erase from string
  cout << "========erase()==========" << endl;
  string str4 = "Hello World";
  cout << "str4 : " << str4 << endl;
  cout << "str4 size : " << str4.size() << endl;
  cout << "str4 capacity : " << str4.capacity() << endl;

  cout << "str4.erase(5, 6) : " << endl;
  str4.erase(5, 6);
  cout << "str4 : " << str4 << endl;

  // push_back() : append character at the end of the string
  cout << "========push_back()==========" << endl;
  string str5 = "Hello World";
  cout << "str5 : " << str5 << endl;
  cout << "str5 size : " << str5.size() << endl;
  cout << "str5 capacity : " << str5.capacity() << endl;

  cout << "str5.push_back('!') : " << endl;
  str5.push_back('!');
  cout << "str5 : " << str5 << endl;

  // pop_back() : remove character at the end of the string
  cout << "========pop_back()==========" << endl;
  string str6 = "Hello World";
  cout << "str6 : " << str6 << endl;
  cout << "str6 size : " << str6.size() << endl;
  cout << "str6 capacity : " << str6.capacity() << endl;

  cout << "str6.pop_back() : " << endl;
  str6.pop_back();
  cout << "str6 : " << str6 << endl;
}