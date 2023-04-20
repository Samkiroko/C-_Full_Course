#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int daysInMonth(int month, int year)
{
  vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (month == 1)
  {
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
    {
      return 29;
    }
  }
  return days[month];
}

int main()
{
  int year;
  string firstWeekday;
  vector<string> weekdays = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  vector<string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  cout << "Enter a year: ";
  cin >> year;
  cout << "Enter the first weekday of the year (e.g., Monday): ";
  cin >> firstWeekday;

  int firstWeekdayIndex = 0;
  for (int i = 0; i < 7; i++)
  {
    if (firstWeekday == weekdays[i])
    {
      firstWeekdayIndex = i;
      break;
    }
  }

  for (int month = 0; month < 12; month++)
  {
    cout << "\n\n"
         << months[month] << " " << year << "\n";
    cout << "  Mo Tu We Th Fr Sa Su\n";

    int weekdayIndex = firstWeekdayIndex;
    for (int space = 0; space < weekdayIndex; space++)
    {
      cout << "   ";
    }

    int days = daysInMonth(month, year);
    for (int day = 1; day <= days; day++)
    {
      cout << setw(3) << day;

      weekdayIndex++;
      if (weekdayIndex == 7)
      {
        cout << "\n";
        weekdayIndex = 0;
      }
    }

    firstWeekdayIndex = weekdayIndex;
  }

  return 0;
}
