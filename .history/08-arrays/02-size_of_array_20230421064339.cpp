#include <iostream>

using namespace std;

int main()
{
  int score[]{1, 2, 3, 4, 5, 5, 6, 6, 7, 8, 9};

  int count { size(score) }

  for (size_t i{0}; i < count; ++i)
  {
    cout << "Scores [" << i << "] : " << scores[i] << endl;
  }

  return 0;
}