#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
  int low = 0, high = n - 1, mid = -1;

  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] <= x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  // Adjust mid to the upper bound
  if (arr[mid] > x) {
    mid--;
  }

  // Ensure mid does not exceed the bounds of the array
  while (mid < n - 1 && arr[mid + 1] == x) {
    mid++;
  }

  // Return the upper bound index
  return mid + 1;
}

int main() { return 0; }