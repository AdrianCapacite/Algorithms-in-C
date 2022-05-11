/*
  Fibonacci Algorithm - fibonacci
  Time Complexity:
    Worst case: O(n)
    Best case: O(n)

  Pseudo Code:
    Iterative:
      Create variable a and b, set them to 0 and 1
      Create variable c
        Set c to a + b
        Set a to b
        Set b to c
        Repeat until n is 0
      Return c

    Recursive:
      If n less than 2
        Return n
      Else
        Return fibonacci(n - 1) + fibonacci(n - 2)

  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
*/
#include <stdio.h>

int Fibonacci(int n);
int FibonacciR(int n);

int main()
{
  printf("Fibonacci of 5: %d\n", Fibonacci(5));

  return 0;
}

int Fibonacci(int n)
{
  int a = 0, b = 1, c;

  for (int i = 0; i < n - 1; i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

int FibonacciR(int n)
{
  if (n < 2)
  {
    return n;
  }
  return FibonacciR(n - 1) + FibonacciR(n - 2);
}