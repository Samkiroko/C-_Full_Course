#include <iostream>
#include <ctime>
#include <cstdlib>

enum Operation
{
  ADDITION = 1,
  SUBTRACTION,
  MULTIPLICATION
};

int generateRandomNumber(int min, int max)
{
  return rand() % (max - min + 1) + min;
}

Operation generateRandomOperation()
{
  return static_cast<Operation>(generateRandomNumber(1, 3));
}

int performOperation(int a, int b, Operation operation)
{
  switch (operation)
  {
  case ADDITION:
    return a + b;
  case SUBTRACTION:
    return a - b;
  case MULTIPLICATION:
    return a * b;
  default:
    return 0;
  }
}

std::string operationToString(Operation operation)
{
  switch (operation)
  {
  case ADDITION:
    return "+";
  case SUBTRACTION:
    return "-";
  case MULTIPLICATION:
    return "*";
  default:
    return "";
  }
}

int main()
{
  srand(time(0));

  while (true)
  {
    int num1 = generateRandomNumber(0, 199);
    int num2 = generateRandomNumber(0, 199);
    Operation operation = generateRandomOperation();
    std::string operationStr = operationToString(operation);

    std::cout << "Calculate the result of the following operation:\n"
              << num1 << " " << operationStr << " " << num2 << " = ";

    int userAnswer;
    std::cin >> userAnswer;

    int correctAnswer = performOperation(num1, num2, operation);

    if (userAnswer == correctAnswer)
    {
      std::cout << "Congratulations! You got it right.\n";
    }
    else
    {
      std::cout << "Oops! You messed up big time. The correct answer is " << correctAnswer << ".\n";
    }

    std::cout << "Do you want to try again? (y/n): ";
    char tryAgain;
    std::cin >> tryAgain;
    if (tryAgain == 'n' || tryAgain == 'N')
    {
      break;
    }
  }

  return 0;
}
