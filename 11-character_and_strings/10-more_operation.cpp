#include <iostream>
using namespace std;

int main()
{

  // replace characters in a string
  cout << "========replace()==========" << endl;
  string str6 = "Hello World";
  cout << "str6 : " << str6 << endl;
  cout << "str6 size : " << str6.size() << endl;
  cout << "str6 capacity : " << str6.capacity() << endl;

  cout << "str6.replace(5, 5, \"Samuel\") : " << endl;
  str6.replace(5, 5, " Samuel");
  cout << "str6 : " << str6 << endl;

  // copying from string to char array
  cout << "========copy()==========" << endl;
  string str7 = "Hello World";
  cout << "str7 : " << str7 << endl;
  cout << "str7 size : " << str7.size() << endl;
  cout << "str7 capacity : " << str7.capacity() << endl;

  char cstr[20];
  cout << "str7.copy(cstr, 11, 0) : " << endl;

  str7.copy(cstr, 12, 0);
  cout << "cstr : " << cstr << endl;
  // find string in the string
  cout << "========find()==========" << endl;
  string str8 = "Hello World";
  cout << "str8 : " << str8 << endl;
  cout << "str8 size : " << str8.size() << endl;
  cout << "str8 capacity : " << str8.capacity() << endl;

  cout << "str8.find(\"World\") : " << endl;
  cout << str8.find("World") << endl;

  // Number to string conversion
  cout << "========to_string()==========" << endl;
  int num = 123456789;
  cout << "num : " << num << endl;
  cout << "to_string(num) : " << to_string(num) << endl;
  // string to number conversion
  cout << "========stoi()==========" << endl;
  string str9 = "123456789";
  cout << "str9 : " << str9 << endl;
  cout << "stoi(str9) : " << stoi(str9) << endl;
  // string to float conversion
  cout << "========stof()==========" << endl;
  string str10 = "123456789.123456789";
  cout << "str10 : " << str10 << endl;
  cout << "stof(str10) : " << stof(str10) << endl;
  // string to double conversion
  cout << "========stod()==========" << endl;
  string str11 = "123456789.123456789";
  cout << "str11 : " << str11 << endl;
  cout << "stod(str11) : " << stod(str11) << endl;
  // string to long double conversion
  cout << "========stold()==========" << endl;
  string str12 = "123456789.123456789";
  cout << "str12 : " << str12 << endl;
  cout << "stold(str12) : " << stold(str12) << endl;
  // string to long long conversion
  cout << "========stoll()==========" << endl;
  string str13 = "123456789123456789";
  cout << "str13 : " << str13 << endl;

  cout << "stoll(str13) : " << stoll(str13) << endl;
  // string to unsigned long long conversion
  cout << "========stoull()==========" << endl;
  string str14 = "123456789123456789";
  cout << "str14 : " << str14 << endl;
  cout << "stoull(str14) : " << stoull(str14) << endl;
  // string to unsigned long conversion
  cout << "========stoul()==========" << endl;
  string str15 = "123456789";
  cout << "str15 : " << str15 << endl;
  cout << "stoul(str15) : " << stoul(str15) << endl;
  // string to unsigned int conversion
  cout << "========stoul()==========" << endl;
  string str16 = "123456789";
  cout << "str16 : " << str16 << endl;
  cout << "stoul(str16) : " << stoul(str16) << endl;
  // string to unsigned short conversion
  cout << "========stoul()==========" << endl;

  string str17 = "123456789";
  cout << "str17 : " << str17 << endl;
  cout << "stoul(str17) : " << stoul(str17) << endl;
  // string to unsigned char conversion
  cout << "========stoul()==========" << endl;
  string str18 = "123456789";
  cout << "str18 : " << str18 << endl;
  cout << "stoul(str18) : " << stoul(str18) << endl;
  // string to long long conversion
  cout << "========stoll()==========" << endl;
  string str19 = "123456789123456789";
  cout << "str19 : " << str19 << endl;
  cout << "stoll(str19) : " << stoll(str19) << endl;
  // string to long conversion
}