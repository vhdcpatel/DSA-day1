#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

// Brute force.
// Take one element and then compare one with all other.
bool twoSumBrute(vector<int> &arr, int sum) {
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[i] + arr[j] == sum) {
        return true;
      }
    }
  }
  return false;
}

// TC: O(n^2) SC: O(1)

bool twoSumBetter(vector<int> &arr, int sum) {
  map<int, int> mpp;
  int left = 0;
  for (int i = 0; i < arr.size(); i++) {
    left = sum - arr[i];
    // cout << i << " " << arr[i] << "  " << left << endl;
    if (mpp.find(left) != mpp.end()) {
      // if (mpp.find(left) != mpp.end() && mpp[left] != i) {
      return true;
      // can also return vector of both the index.
    }
    mpp[arr[i]] = i;
  }
  return false;
}
// TC: O(n*log(n)) SC: O(n)

// Optimize approach:
// without extra space.
bool twoSum(vector<int> &arr, int sum) {
  sort(arr.begin(), arr.end());

  int low = 0, high = arr.size() - 1;
  int tempSum = 0;
  while (low < high) {
    tempSum = arr[low] + arr[high];
    if (tempSum == sum) {
      return true;
    } else if (tempSum > sum) {
      high--;
    } else if (tempSum < sum) {
      low++;
    }
  }
  return false;
}

int main() {
  vector<int> arr = {2, 6, 5, 8, 11};
  int ans;
  ans = twoSum(arr, 7);
  cout << ans;
  return 0;
}