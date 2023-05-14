#include <iostream>

using namespace std;

int main()
{
  bool isSignedIn = true;
  bool isAdmin = true;

  if (isSignedIn && isAdmin)
  {
    cout << "You are signed in as admin" << endl;
  }
  else if (isSignedIn && !isAdmin)
  {
    cout << "You are signed in as user" << endl;
  }
  else
  {
    puts("You are not signed in");
  }

  return 0;
}