/*
  Binary search algorithm - binary_search
  Recursive binary search algorithm
  Divide and conquer
  Time complexity:
    Best: O(log n)
    Worst: O(log n)

  Pseudocode:
    Find half of current array, and compare with target
    If target is smaller, search in the first half of the array
    If target is larger, search in the second half of the array
    Repeat until target is found or array is empty
    Return -1 if target is not found

  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
*/
#include <stdio.h>
#include <time.h>
#include "./../testlib.h"

int BinarySearch(int arr[], int key, int low, int high);

int main()
{
  test();

  // what are we looking at?
  printf("Key: %d\n", key);
  printf("Array: ");
  PrintArray(sorted, SIZE);
  printf("\n");

  // sort array
  int index = BinarySearch(sorted, key, 0, SIZE-1);

  // print where key is found
  printf("Key found at index: %d\n", index);

  return 0;
}

// Binary search
int BinarySearch(int arr[], int key, int low, int high)
{
  if (low > high) // Reached end?
  {
    // key is not found
    return - 1;
  }

  int mid = (low + high) / 2; // midpoint of the array
  if (arr[mid] == key) // Is midpoint the key?
  {
    // key is found
    return mid;
  }

  if (arr[mid] > key) // if key is smaller than mid
  {
    // search in the first half of the array
    return BinarySearch(arr, key, low, mid - 1);
  }
  else
  {
    // search in the second half of the array
    return BinarySearch(arr, key, mid + 1, high);
  }
}
