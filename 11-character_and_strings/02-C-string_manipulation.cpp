#include <iostream>
#include <cstring>

using namespace std;

// string manipulation: length of string
int main()
{
  char str1[]{"This is a test"};
  cout << "The length of the string in str1 is " << strlen(str1) << endl;

  char str2[]{"This is also a test"};
  cout << "The length of the string in str2 is " << strlen(str2) << endl;

  // string manipulation: compare two strings
  if (strcmp(str1, str2) == 0)
  {
    cout << "str1 and str2 are the same" << endl;
  }
  else
  {
    cout << "str1 and str2 are different" << endl;
  }

  // string manipulation: find first occurrence of a character in a string
  char str3[]{"This is a test"};
  char *pFound = strchr(str3, 's');
  if (pFound != nullptr)
  {
    cout << "Found 's' in str3" << endl;
  }
  else
  {
    cout << "Did not find 's' in str3" << endl;
  }

  // string manipulation: last occurrence of a character in a string
  char str4[]{"This is a test"};
  pFound = strrchr(str4, 's');
  if (pFound != nullptr)
  {
    cout << "Found 's' in str4" << endl;
  }
  else
  {
    cout << "Did not find 's' in str4" << endl;
  }

  // string manipulation: copy a string
  char str5[]{"This is a test"};
  char str6[50];
  strcpy(str6, str5);
  cout << "str6 is: " << str6 << endl;

  // string manipulation: concatenate two strings
  char str7[]{"This is a test"};
  char str8[]{" and this is too"};
  strcat(str7, str8);
  cout << "str7 is: " << str7 << endl;

  return 0;
}
