#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int findLowHigh(vector<int>& arr, int n, int k, bool isLow) {
  int low = 0, high = n - 1, mid, ans = -1;
  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] == k) {
      ans = mid;
      // Main Logic:
      if (isLow) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } else if (k > arr[mid]) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
  int low, high;
  low = findLowHigh(arr, n, k, true);
  high = findLowHigh(arr, n, k, false);
  return {low, high};
}

int main() { return 0; }