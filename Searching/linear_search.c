/*
  Linear search algorithm - linear_search
  Linear search algorithm iterative and recursive
  Time complexity: O(n)

  Pseudocode:
    Iterate through the array
    Compare each element with the target
    If target is found, return the index
    If target is not found, return -1

  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
*/
#include <stdio.h>
#include "./../testlib.h"

int LinearSearch(int arr[], int key, int size);
int linear_search_r(int arr[], int key, int index);


int main()
{
  test();

  // what are we looking at?
  printf("Key: %d\n", key);
  printf("Array: ");
  PrintArray(unsorted, SIZE);
  printf("\n");

  // sort array
  int index = LinearSearch(unsorted, key, SIZE);
  int index_r = linear_search_r(unsorted, key, SIZE-1);

  // print where key is found
  printf("Key found at index: %d\n", index);
  printf("Key found at index_r: %d\n", index_r);

  return 0;
}

int LinearSearch(int arr[], int key, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int linear_search_r(int arr[], int key, int index)
{
  if (index == -1)
  {
    return -1;
  }
  if (arr[index] == key)
  {
    return index;
  }
  return linear_search_r(arr, key, index - 1);
}