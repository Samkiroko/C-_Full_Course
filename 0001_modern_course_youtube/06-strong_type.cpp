// Author: Samuel Kiroko Njenga
// Copyright © 2023 lytxcode. All rights reserved.

#include <iostream>

using namespace std;

struct User
{
  const int uid;
  const char *name;
  const char *email;
  int course_count;

  User(int uid, const char *name, const char *email, int course_count) : uid(uid), name(name), email(email), course_count(course_count) {}
};

int main()
{
  // stack
  int score = 100;
  User mike;

  // heap
  int *heap_score = new int;
  *heap_score = 200;

  User *mike2 = new User();

  delete heap_score;
  delete mike2;

  return 0;
}