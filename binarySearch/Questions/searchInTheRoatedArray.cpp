#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

/*
Input: nums = [4,5,6,7,8,9,0,1,2], target = 0
Output: 4
*/

int findPivot(vector<int>& nums) {
  int low = 0, high = nums.size() - 1, mid;

  while (low < high) {
    mid = low + (high - low) / 2;
    if (nums[mid] >= nums[0]) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  return low;
}

int findLowHigh(vector<int>& arr, int low, int high, int k) {
  int mid, ans = -1;

  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] == k) {
      return mid;
    } else if (k > arr[mid]) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}

int search(vector<int>& nums, int target) {
  int pivot = findPivot(nums);
  int ans = findLowHigh(nums, 0, pivot - 1, target);
  if (ans != -1) {
    return ans;
  }
  ans = findLowHigh(nums, pivot, nums.size() - 1, target);
  return ans;
}

int main() { return 0; }