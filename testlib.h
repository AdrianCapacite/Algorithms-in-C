#ifndef TESTLIB_H
#define TESTLIB_H
#define SIZE 10
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Print array
#define PrintArray(A, size) printf("{ "); for (int i = 0; i < size-1; i++) printf("%d, ", A[i]); printf("%d }\n", A[size-1]);

int key = 8; // value: 8

// sorted array
int sorted[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // value: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

// completely unsorted array
int unsorted[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // value: 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

// partially sorted array
int partially_unsorted[SIZE] = {8,1,6,2,6,2,8,8,7,5}; // value: 8, 1, 6, 2, 6, 2, 8, 8, 7, 5

// random array
int random[SIZE] = {0}; // must be initialized with new_random()
int random_key = 0; // must be initialized with new_random()

// new random array
void new_random()
{
  srand(time(NULL));

  for (int i = 0; i < SIZE; i++)
  {
    random[i] = rand() % 100;
  }

  // Pick random number from array
  random_key = random[rand() % SIZE];
}

void test()
{
  printf("Test library loaded\n");
}


#endif