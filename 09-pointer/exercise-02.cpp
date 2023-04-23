#include <iostream>

int main()
{
  int data[] = {1, 3, 6, 3, 9, 3, 5, 7, 2, 11};
  unsigned int offset = 3;

  if (offset < sizeof(data) / sizeof(data[0]))
  {
    std::cout << "The element " << offset << " slots away from the beginning is : " << data[offset] << std::flush;
  }
  else
  {
    std::cout << "Invalid offset" << std::endl;
  }

  return 0;
}
