#include <iostream>
#include <string>

/*
! int
! double
! float
! char
! bool
! void
! auto
? variable = A named piece of memory that you use to store specific types of data.
*/

int main()
{
  // // different representation of numbers
  // int number1 = 15;         // Decimal
  // int number2 = 017;        // Octal
  // int number3 = 0x0f;       // Hexadecimal
  // int number4 = 0b00001111; // Binary

  // std::cout << "number1 : " << number1 << std::endl;
  // std::cout << "number2 : " << number2 << std::endl;
  // std::cout << "number3 : " << number3 << std::endl;
  // std::cout << "number4 : " << number4 << std::endl;

  // Variable may contain random garbage value.
  int elephant_count;

  // initializes to zero
  int lion_cout{};

  // initialize to 15
  int cat_count{15};

  int dog_count(20);
  // can use expression as initializer
  int demesticated_animals{dog_count + cat_count};

  std::cout << demesticated_animals << std::endl;
}