#include <iostream>

using namespace std;

struct User
{
  const int uid;
  const char *name;
  const char *email;
  int course_count;
};

int main()
{
  User mike = {001, "Mike", "email@email.com", 2};
  User mikey = {001, "Mikey", "mikey@email.com", 3};

  User *m = &mike;

  m->course_count = 13;

  cout << mike.name << endl;
  cout << mike.email << endl;
  cout << mike.course_count << endl;

  cout << mikey.name << endl;
  cout << mikey.email << endl;
  cout << mikey.course_count << endl;
  return 0;
}