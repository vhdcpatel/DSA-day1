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
      swap(arr[i], arr[min]);
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
  selectionSort(n, arr);

  // for (int i = 0; i < n; i++) {
  //   cout << arr[i] << " ";
  // }
  for (auto it : arr) {
    cout << it << " ";
  }
  return 0;
}