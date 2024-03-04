#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
  /*
  basically we want to find the pivot element in the array.
  6
  25 30
  35
  10 15 20
  */

  int low = 0, high = arr.size() - 1, mid;
  while (low < high) {
    // If the array is already sorted, the minimum element is at index 0
    if (arr[low] < arr[high]) {
      return arr[low];
    }

    mid = low + (high - low) / 2;
    // Check if the mid element is the minimum
    if (arr[mid] < arr[low]) {
      // The minimum element is in the left half
      high = mid;
    } else if (arr[mid] > arr[high]) {
      // The minimum element is in the right half
      low = mid + 1;
    } else {
      // Handle the case where arr[mid] == arr[high]
      // We can't determine which half to search, so decrement high
      high--;
    }
  }
  return arr[low];
}

int findMinOptimized(vector<int>& nums) {
  int n = nums.size();
  int start = 0;
  int end = n - 1;

  if (nums.size() == 1) {
    return nums[0];
  }

  if (nums[start] < nums[end]) {
    return nums[0];
  }
  while (start < end) {
    int mid = start + (end - start) / 2;

    if (nums[mid] > nums[mid + 1]) {
      return nums[mid + 1];
    }
    if (nums[mid] < nums[mid - 1]) {
      return nums[mid];
    }

    if (nums[start] < nums[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return nums[start];
}

int main() { return 0; }