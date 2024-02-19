#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>& a) {
  vector<int> positive;
  vector<int> negative;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] < 0) {
      negative.push_back(a[i]);
    } else {
      positive.push_back(a[i]);
    }
  }

  a.clear();
  int n = min(positive.size(), negative.size());
  int i = 0;
  for (; i < n; i++) {
    a.push_back(positive[i]);
    a.push_back(negative[i]);
  }

  return a;
}

vector<int> rearrangeArray(vector<int>& nums) {
  vector<int> ans(nums.size());
  int positiveIndex = 0, negativeIndex = 1;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > 0) {
      ans[positiveIndex] = nums[i];
      positiveIndex += 2;
    } else {
      ans[negativeIndex] = nums[i];
      negativeIndex += 2;
    }
  }
  return ans;
}

void posAndNeg(vector<int>& arr) {
  vector<int> positive;
  vector<int> negative;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] < 0) {
      negative.push_back(arr[i]);
    } else {
      positive.push_back(arr[i]);
    }
  }

  arr.clear();
  if (positive.size() >= negative.size()) {
    int i = 0;
    for (; i < negative.size(); i++) {
      arr.push_back(positive[i]);
      arr.push_back(negative[i]);
    }
    while (i < positive.size()) {
      arr.push_back(positive[i++]);
    }
  } else {
    int i = 0;
    for (; i < positive.size(); i++) {
      arr.push_back(positive[i]);
      arr.push_back(negative[i]);
    }
    while (i < negative.size()) {
      arr.push_back(negative[i++]);
    }
  }

  // Optimized code.
  /*
  // Merge positive and negative numbers alternatively
    size_t minSize = min(positive.size(), negative.size());
    for (size_t i = 0; i < minSize; ++i) {
        arr.push_back(positive[i]);
        arr.push_back(negative[i]);
    }

    // Add remaining elements from the larger vector
    for (size_t i = minSize; i < positive.size(); ++i) {
        arr.push_back(positive[i]);
    }
    for (size_t i = minSize; i < negative.size(); ++i) {
        arr.push_back(negative[i]);
    }
    */
}

int main() { return 0; }