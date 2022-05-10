/*
  Selction sort - selection_sort
  Time complexity: O(n^2)

  Pseudocode:
    Iterate through the array
    Find the smallest element in the array
    Swap the smallest element with the first element
    Repeat until the array is sorted

  Modified:
    Checks if current is same as minimum, make no swap

  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
*/
#include <stdio.h>
#include "./../testlib.h"

void SelectionSort(int arr[], int size);
void SelectionSortM(int arr[], int size);

int main()
{
  test();

  // what are we looking at?
  new_random();
  printf("Array: ");
  PrintArray(random, SIZE);

  // sort array
  SelectionSortM(random, SIZE);

  // print sorted array
  printf("\nSorted array: ");
  PrintArray(random, SIZE);

  return 0;
}

// selection sort
void SelectionSort(int arr[], int size)
{
  int min;
  int temp;
  // iterate through the array
  for (int i = 0; i < size; i++)
  {
    // get min value
    min = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    // swap
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}

// modifed selection sort
void SelectionSortM(int arr[], int size)
{
  int min;
  int temp;
  // iterate through the array
  for (int i = 0; i < size; i++)
  {
    // get min value
    min = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    // swap if not same
    if (arr[i] != arr[min])
    {
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
  }
}