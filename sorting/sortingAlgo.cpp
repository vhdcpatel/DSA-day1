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
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        didSwapHappened = 1;
      }
      if (!didSwapHappened) {
        break;
        // Reduce TC to O(n);
      }
    }
  }
}

int main() {
  int n;
  cout << "Enter the size of the array";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubbleSort(n, arr);

  // for (int i = 0; i < n; i++) {
  //   cout << arr[i] << " ";
  // }

  for (auto it : arr) {
    cout << it << " ";
  }
  return 0;
}