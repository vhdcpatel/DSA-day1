#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
  // int lowerBound = 0;
  int low = 0, high = n - 1, mid = -1;

  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  if (arr[mid] < x) {
    mid++;
  }

  while (mid > 0 && arr[mid - 1] == x) {
    mid--;
  }

  // for (int i = mid; i > 0; i--) {
  //   if (arr[i] == x) {
  //     mid = i;
  //   } else {
  //     break;
  //   }
  // }
  return mid;
}

int main() { return 0; }