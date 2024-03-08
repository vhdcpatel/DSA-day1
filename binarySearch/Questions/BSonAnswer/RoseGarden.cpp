#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int roseGarden(vector<int> arr, int k, int m) {
  int low = 1;
  int high = *max_element(arr.begin(), arr.end());
  int mid;
  int isPossible = -1;
  while (low <= high) {
    mid = low + (high - low) / 2;
    int bouquetCount = 0;
    int consecutiveRoses = 0;

    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] <= mid) {
        consecutiveRoses++;
        if (consecutiveRoses == k) {
          bouquetCount++;
          consecutiveRoses = 0;
        }
      } else {
        consecutiveRoses = 0;
      }
    }
    if (bouquetCount >= m) {
      isPossible = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return isPossible;
}

int main() { return 0; }