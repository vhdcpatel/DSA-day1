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
- Implemented Linear search for edge case. to handle 
ex. [0,0,1,0]
*/

// Can have duplicate element in the array.
bool search(vector<int>& nums, int target) {
  int low = 0, high = nums.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    // Check if the middle element is equal to the target
    if (nums[mid] == target) return true;

    // Handle cases where the low, mid, and high positions have the same value
    if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
      // Linear search in this scenario
      for (int i = low; i <= high; ++i) {
        if (nums[i] == target) return true;
      }
      return false;
    }

    // If left part is sorted
    if (nums[low] <= nums[mid]) {
      if (nums[low] <= target && target < nums[mid]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } else {
      // If right part is sorted
      if (nums[mid] < target && target <= nums[high]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
  }
  return false;
}

int main() { return 0; }