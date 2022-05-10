/*
  Bubble sort algorithm - bubble_sort
  Time Complexity:
    Unmodified:
      Worst case: O(n^2)
      Best case: O(n^2)
    Modified:
      Worst case: O(n^2)
      Best case: O(n)

  Pseudo Code:
    Iterate through the array
    Compare each element with the next
    If the next element is smaller, swap
    Repeat until array is sorted

  In the modified version, after one iteration
  it checks if no swap was made. If no swap
  was made, the array is sorted.

  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
*/
#include <stdio.h>
#include "./../testlib.h"

void BubbleSort(int arr[], int size);
void BubbleSortM(int arr[], int size);

int main()
{
  test();

  // what are we looking at?
  new_random();
  printf("Array: ");
  PrintArray(random, SIZE);

  // sort array
  BubbleSortM(random, SIZE);

  // print sorted array
  printf("\nSorted array: ");
  PrintArray(random, SIZE);

}

// bubble sort
void BubbleSort(int arr[], int size)
{
  int temp;
  // iterate through the array
  for (int i = 0; i < size; i++)
  {
    // compare each element with the next
    for (int j = 0; j < size - 1; j++)
    {
      // if the next element is smaller, swap
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

// modified bubble sort
void BubbleSortM(int arr[], int size)
{
  int temp;
  int no_swap = 1;
  // iterate through the array until no swap is made
  while (no_swap == 1)
  {
    no_swap = 1;
    // compare each element with the next
    for (int j = 0; j < size - 1; j++)
    {
      // if the next element is smaller, swap
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        no_swap = 0;
      }
    }
  }
}