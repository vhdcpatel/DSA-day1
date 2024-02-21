#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

void permute(vector<int> &nums, int start, vector<vector<int>> &res) {
  if (start == nums.size() - 1) {
    res.push_back(nums);
    return;
  }

  for (int i = start; i < nums.size(); i++) {
    swap(nums[i], nums[start]);
    permute(nums, start + 1, res);
    // back track;
    swap(nums[i], nums[start]);
  }
}

bool isEqual(const vector<int> &v1, const vector<int> &v2) {
  if (v1.size() != v2.size()) {
    return false;
  }

  for (int i = 0; i < v1.size(); ++i) {
    if (v1[i] != v2[i]) {
      return false;
    }
  }

  return true;
}

vector<int> nextGreaterPermutation(vector<int> &A) {
  vector<vector<int>> res;
  // In the sorted error.
  // Find the index of the current permutation in the sorted list
  permute(A, 0, res);
  sort(res.begin(), res.end());
  int index = -1;
  for (int i = 0; i < res.size(); ++i) {
    if (isEqual(res[i], A)) {
      index = i;
      break;
    }
  }

  // If current permutation is the last one, return the first permutation
  if (index == res.size() - 1) {
    return res[0];
  }

  // Otherwise, return the next permutation after the current one
  return res[index + 1];
}

int main() { return 0; }