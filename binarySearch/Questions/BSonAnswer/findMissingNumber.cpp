#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

// brute
int missingKBrute(vector<int> vec, int n, int k) {
  for (int i = 0; i < n; i++) {
    if (vec[i] <= k) {
      k++;
    } else {
      break;
    }
  }

  return k;
};

// optimized
int missingK(vector<int> vec, int n, int k) {
  int low = 0, high = n - 1, mid;
  while (low <= high) {
    mid = low + (high - low) / 2;
    int missingNumbersCurrent = vec[mid] - (mid + 1);
    if (missingNumbersCurrent < k) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return high + k + 1;
};

int main() { return 0; }