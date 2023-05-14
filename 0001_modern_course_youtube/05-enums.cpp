#include <iostream>

using namespace std;

enum MsOffice
{
  WORD,
  EXCEL,
  POWERPOINT
};

int main()
{
  MsOffice file = WORD;

  if (file == WORD)
  {
    cout << "File is a Word document" << endl;
  }
  else if (file == EXCEL)
  {
    cout << "File is an Excel document" << endl;
  }
  else if (file == POWERPOINT)
  {
    cout << "File is a Powerpoint document" << endl;
  }
  else
  {
    cout << "File is not a Word, Excel, or Powerpoint document" << endl;
  }

  return 0;
}