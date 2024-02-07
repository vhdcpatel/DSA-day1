#include <vector>

void mergeArray(int arr[], int low, int mid, int high) {
  int n1 = mid - low + 1;
  int n2 = high - mid;

  // Create temporary arrays to store the left and right subarrays
  int L[n1], R[n2];

  // Copy data to temporary arrays
  for (int i = 0; i < n1; i++) {
    L[i] = arr[low + i];
  }
  for (int j = 0; j < n2; j++) {
    R[j] = arr[mid + 1 + j];
  }

  // Merge the temporary arrays back into arr[low..high]
  int i = 0;    // Initial index of first subarray
  int j = 0;    // Initial index of second subarray
  int k = low;  // Initial index of merged subarray

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of L[], if any
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Copy the remaining elements of R[], if any
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l >= r) return;  // Base case: stop when l is greater than or equal to r
  int mid = l + (r - l) / 2;
  mergeSort(arr, l, mid);      // Sort the left half
  mergeSort(arr, mid + 1, r);  // Sort the right half
  mergeArray(arr, l, mid, r);  // Merge the sorted halves
}