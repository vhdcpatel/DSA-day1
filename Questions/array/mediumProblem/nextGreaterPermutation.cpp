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

vector<int> nextGreaterPermutationBrute(vector<int> &A) {
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

vector<int> nextGreaterPermutationBrute(vector<int> &A) {
  int dipIndex = -1;
  for (int i = A.size() - 2; i >= 0; i--) {
    if (A[i] < A[i + 1]) {
      dipIndex = i;
      break;
    }
  }

  if (dipIndex == -1) {
    reverse(A.begin(), A.end());
    return A;
  }

  for (int i = A.size() - 1; i >= 0; i--) {
    if (A[i] > A[dipIndex]) {
      swap(A[i], A[dipIndex]);
      break;
    }
  }

  reverse(A.begin() + dipIndex + 1, A.end());
  return A;
}

// Optimal from leetcode.
/*
void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
        for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
        if (k < 0) {
            reverse(nums.begin(), nums.end());
        } else {
            for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            }
            swap(nums[k], nums[l]);
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
*/
int main() { return 0; }