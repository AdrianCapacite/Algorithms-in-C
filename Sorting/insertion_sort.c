/*
  Insertion sort algorithm - insertion_sort
  Time Complexity:
    Worst case: O(n^2)
    Best case: O(n)

  Pseudo Code:
    Iterate through the array
    Store the current element in a temp variable
    Find element greater than current in sorted part of array
    Shift elements to the right to make room for current element
    Insert current element into correct position


  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
*/
#include <stdio.h>
#include "./../testlib.h"

void InsertionSort(int arr[], int size);

int main()
{
  test();

  // what are we looking at?
  new_random();
  printf("Array: ");
  PrintArray(random, SIZE);

  // sort array
  InsertionSort(random, SIZE);

  // print sorted array
  printf("\nSorted array: ");
  PrintArray(random, SIZE);
}

void InsertionSort(int arr[], int size)
{
  for (int i = 1; i < size; i++)
  {
    int j = i - 1;
    int temp = arr[i];
    while (j >= 0 && arr[j] > temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}