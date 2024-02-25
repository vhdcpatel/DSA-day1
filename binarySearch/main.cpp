#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int binarySearchRecursive(const int *arr, int low, int high, int target) {
  if (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
      return mid;  // Element found at index mid
    } else if (arr[mid] < target) {
      // Search in the right half of the array
      return binarySearchRecursive(arr, mid + 1, high, target);
    } else {
      // Search in the left half of the array
      return binarySearchRecursive(arr, low, mid - 1, target);
    }
  }
  return -1;  // Element not found
}

int binarySearch(int *arr, int n, int k) {
  int low = 0, high = n - 1, mid;
  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] == k) {
      return mid;
    } else if (arr[mid] < k) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int arr[8] = {3, 4, 6, 7, 9, 12, 16, 17};
  int index = binarySearch(arr, 8, 17);
  if (index != -1) {
    cout << "Element found at index: " << index << endl;
  } else {
    cout << "Element not found" << endl;
  }
  return 0;
}

int search(vector<int> &nums, int target) {
  int low = 0, high = nums.size() - 1, mid;
  while (low <= high) {
    mid = low + (high - low) / 2;
    if (nums[mid] == target) {
      return mid;
    } else if (nums[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}