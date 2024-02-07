#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

void selectionSort(int n, int arr[]) {
  int min;
  for (int i = 0; i < n - 1; i++) {
    min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    swap(arr[i], arr[min]);
  }
}

void bubbleSort(int n, int arr[]) {
  // i>=1
  for (int i = n - 1; i > 2; i--) {
    int didSwapHappened = 0;
    // Check pair for full.
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        didSwapHappened = 1;
      }
    }
    // Check if no swap happened then break because it might be already sorted.
    if (didSwapHappened == 0) {
      break;
      // Reduce TC to O(n);
    }
  }
}

void insertionSort(int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      swap(arr[j - 1], arr[j]);
      j--;
    }
  }
}

void binaryInsertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int left = 0, right = i - 1;

    while (left <= right) {
      int mid = left + (right - left) / 2;

      if (arr[mid] > key) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }

    for (int j = i; j > left; j--) {
      arr[j] = arr[j - 1];
    }

    arr[left] = key;
  }
}

void mergeArray(int arr[], int low, int mid, int high) {
  int temp[low - high];
  int left = low;
  int right = mid + 1;
  while (left <= mid && right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back()
    }
  }
}

void mergeSort(int arr[], int low, int high) {
  if (low == high) return;
  int mid = low + (high - low) / 2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  mergeArray(arr, low, mid, high);
}

void mergeSortDriver(int arr[], int n) {}

int main() {
  int n;
  cout << "Enter the size of the array";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  insertionSort(n, arr);

  // for (int i = 0; i < n; i++) {
  //   cout << arr[i] << " ";
  // }

  for (auto it : arr) {
    cout << it << " ";
  }
  return 0;
}