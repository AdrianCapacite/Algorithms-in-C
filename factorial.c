/*
  Factorial algorithm - factorial
  Time Complexity:
    Worst case: O(n)
    Best case: O(n)

  Pseudo Code:
    Iterative:
      Create result variable and set it to 1
      Multiply result by current number
      Decrement current number
      Repeat until current number is 0

    Recursive:
      If current number is 0
        Return 1
      Else
        Return current number * factorial(current number - 1)
  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
*/
#include <stdio.h>

int Factorial(int n);
int FactorialR(int n);

int main()
{
  printf("Factorial of 5: %d\n", Factorial(5));

  return 0;
}

int Factorial(int n)
{
  int result = 1;
  while (n > 0)
  {
    result *= n;
    n--;
  }
  return result;
}

int FactorialR(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return n * FactorialR(n - 1);
}