#include <iostream>

using namespace std;

int main()
{

  // check if a character is an alphanumeric character
  char ch = 'a';
  if (isalnum(ch))
  {
    cout << "The character is alphanumeric" << endl;
  }
  else
  {
    cout << "The character is not alphanumeric" << endl;
  }

  // check how many character in a given character

  cout << endl;
  cout << "Std: isdigit : " << endl;
  char statement[]{"Mr hamilton owns 221 cows. that's 221 more than mr. smith"};
  int count{};

  for (auto digit : statement)
  {
    if (isdigit(digit))
    {
      cout << digit << " is a digit" << endl;
      count++;
    }
  }
  cout << "There are " << count << " digits in the statement" << endl;

  // turn character to uppercase/lowercase
  cout << endl;
  cout << "Std: toupper and tolower : " << endl;
  char original[]{"Home. The feeling of being at home is a wonderful thing."};
  char dest_str[size(original)];

  // Turn this to uppercase
  for (size_t i{}; i < size(original); i++)
  {
    dest_str[i] = toupper(original[i]);
  }
  cout << "Original: " << original << endl;
  cout << "Uppercase: " << dest_str << endl;

  // Turn this to lowercase
  for (size_t i{}; i < size(original); i++)
  {
    dest_str[i] = tolower(original[i]);
  }

  cout << "Original: " << original << endl;
  cout << "Lowercase: " << dest_str << endl;
  return 0;
}