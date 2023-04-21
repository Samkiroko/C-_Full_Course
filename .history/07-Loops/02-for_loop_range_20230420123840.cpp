#include <iostream>
#include <vector>

using namespace std;

void pay_less()
{

  std::vector<double> unit_prices{10.4, 21.5, 14.0, 15.2, 7.9};
  std::vector<double> number_of_items{60, 20, 10, 30, 20, 50};

  // Don't modify anything above this line
  // Your code should go below this line

  double least_cost{9999999};

  unsigned int count{0};

  while (count < 5)
  {
    if ((unit_prices[count] * number_of_items[count]) < least_cost)
    {
      least_cost = unit_prices[count] * number_of_items[count];
    }
    ++count;
  }

  // Your code should go above this line
  // Don't modify anything below this line

  std::cout << "The least I can pay is  : " << least_cost;
}

int main()
{
  // int bag_of_values[]{1, 2, 3, 4, 5, 6, 7, 8};

  // for (int value : bag_of_values)
  // {
  //   cout << "Value : " << value << endl;
  // }

  // const unsigned int COUNT{10};

  // unsigned int i{0};

  // while (i < COUNT)
  // {
  //   cout << "I love c++ " << endl;
  //   ++i;
  // }
  // pay_less();

  const int COUNT{10};
  size_t ii{0};

  do
  {
    cout << "I love C++" << endl;
    ++i;
  } while (i < COUNT);

  return 0;
}
