/*
  Merge sort algorithm - merge_sort
  Divide and conquer algorithm
  Time Complexity:
    Worst case: O(n log n)
    Best case: O(n log n)

  Pseudo Code:
    MergeSort:
      Divide the array into halves
      Recursively sort each half
      Merge the halves

    Merge:
      Copy halves into new temp array
      Copy the smallest of either current values of each subarray into the main array
      Increment the index of the subarray and main array
      Repeat until one of the subarrays is empty
      Copy the remaining values of the other subarray into the main array


  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
*/
#include <stdio.h>
#include "./../testlib.h"

void MergeSort(int arr[], int low, int high);
void Merge(int arr[], int low, int mid, int high);

int main()
{
  test();

  // what are we looking at?
  new_random();
  printf("Array: ");
  PrintArray(random, SIZE);

  // sort array
  MergeSort(random, 0, SIZE - 1);

  // print sorted array
  printf("\nSorted array: ");
  PrintArray(random, SIZE);

  return 0;
}

// merge sort
void MergeSort(int arr[], int low, int high)
{
  // Base case if the array has only one element
  if (low < high)
  {
    int mid = (low + high) / 2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
  }
}

void Merge(int arr[], int low, int mid, int high)
{
  int idx, idxL, idxR; // Index values for main array, left array, right array

  // Create temp arrays
  int nL = mid - low + 1;
  int nR = high - mid;

  int *arrL = (int*)calloc(nL, sizeof(int));
  int *arrR = (int*)calloc(nR, sizeof(int));

  // Copy data to temp arrays
  for (idxL = 0; idxL < nL; idxL++)
  {
    arrL[idxL] = arr[low + idxL];
  }
  for (idxR = 0; idxR < nR; idxR++)
  {
    arrR[idxR] = arr[mid + 1 + idxR];
  }

  // Merge the temp arrays
  idxL = 0;
  idxR = 0;
  idx = low;

  // Loop till one of the arrays is empty
  while (idxL < nL && idxR < nR)
  {
    // Copy the smaller value to main array
    if (arrL[idxL] <= arrR[idxR])
    {
      arr[idx] = arrL[idxL];
      idxL++;
    }
    else
    {
      arr[idx] = arrR[idxR];
      idxR++;
    }
    idx++;
  }

  // Copy the remaining values of either array
  while (idxL < nL)
  {
    arr[idx] = arrL[idxL];
    idxL++;
    idx++;
  }
  while (idxR < nR)
  {
    arr[idx] = arrR[idxR];
    idxR++;
    idx++;
  }

  // Free the temp arrays
  free(arrL);
  free(arrR);
}