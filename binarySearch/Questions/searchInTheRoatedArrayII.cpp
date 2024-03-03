#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

/*
[2,5,6,
0
,0,1,2],


target = 0
*/

/*
When there are search and sorted term in the array, always think for the binary
search.
- For rotated array focus on finding the sorted half.
- And one part will be always sorted.
*/

// Can have duplicate element in the array.
bool search(vector<int>& nums, int target) {
  int low = 0, high = nums.size() - 1, mid;

  while (low <= high) {
    mid = low + (high - low) / 2;
    if (nums[mid] == target) {
      return true;
      // To handle the edge case:
    } else if (nums[mid] == nums[low] && nums[mid] == nums[high]) {
      low++, high--;
      // check if we are in the sorted part.
    } else if (nums[mid] < nums[low]) {
      // Set the low and high for sorted array.
      if (nums[low] <= target && target <= nums[mid]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } else {
      if (nums[mid] < target && target < nums[high]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
  }
  return false;
}

int main() { return 0; }