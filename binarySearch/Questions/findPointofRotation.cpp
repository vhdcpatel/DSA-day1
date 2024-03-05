#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

/*
greedy (IDK)=> Limiting low and high for the array based on high value.
*/
int findKRotation(vector<int> &arr) {
  int low = 0, mid, high = arr.size() - 1;

  while (low < high) {
    mid = low + (high - low) / 2;

    if (arr[mid] > arr[high]) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  return low;
}

int findKRotationStiverLogic(vector<int> &arr) {
  int low = 0, high = arr.size() - 1;
  int ans = INT32_MAX;
  int index = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    // search space is already sorted
    // then arr[low] will always be
    // the minimum in that search space:
    if (arr[low] <= arr[high]) {
      if (arr[low] < ans) {
        index = low;
        ans = arr[low];
      }
      break;
    }

    // if left part is sorted:
    if (arr[low] <= arr[mid]) {
      // keep the minimum:
      if (arr[low] < ans) {
        index = low;
        ans = arr[low];
      }

      // Eliminate left half:
      low = mid + 1;
    } else {  // if right part is sorted:

      // keep the minimum:
      if (arr[mid] < ans) {
        index = mid;
        ans = arr[mid];
      }

      // Eliminate right half:
      high = mid - 1;
    }
  }
  return index;
}

int main() { return 0; }