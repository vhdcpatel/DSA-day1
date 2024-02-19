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
  for (int i = 0; i < n; i++) {
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

int main() { return 0; }