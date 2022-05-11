/*
  Sieve of Eratosthene - sieve
  Time Complexity:
    Worst case: O(n^2)
    Best case: O(n^2)

  Pseudo Code:
    sieve(n)
      start at index 2 and go up to sqrt(n)
        for each multiple of the current index
          mark the multiple as not prime

  Author: Adrian Thomas Capacite
  Date: 11 / 05 / 2022
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "testlib.h"
#define COUNT 100

void sieve(int a[], int n);

int main()
{

  int a[COUNT];
  // Set array to all true
  for (int i = 0; i < COUNT; i++)
  {
    a[i] = 1;
  }

  // Print numbers
  for (int i = 1; i < COUNT; i++)
  {
    if (a[i] == 1)
    {
      printf("%d ", i);
    }
  }

  sieve(a, COUNT);

  printf("\n\n");

  for (int i = 1; i < COUNT; i++)
  {
    if (a[i] == 1)
    {
      printf("%d ", i);
    }
  }

  // PrintArray(a, COUNT);

  return 0;
}

void sieve(int a[], int n)
{
  for (int i = 2; i*i <= n; i++)
  {
    for (int j = i * 2; j < n; j += i)
    {
      a[j] = 0;
    }
  }
}