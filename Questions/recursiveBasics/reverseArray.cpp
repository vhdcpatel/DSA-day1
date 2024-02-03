#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

void reverseArrayRecursiveFunction(int start, int end, vector<int> &num) {
  if (start >= end) return;
  swap(num[start], num[end]);
  reverseArrayRecursiveFunction(start + 1, end - 1, num);
}

vector<int> reverseArrayRecursive(int n, vector<int> &nums) {
  int start = 0, end = n - 1;
  reverseArrayRecursiveFunction(start, end, nums);
  return nums;
}

// vector<int> reverseArray(int n, vector<int> &nums) {
//   int start = 0, end = n - 1;
//   while (start < end) {
//     swap(nums[start++], nums[end--]);
//   }
// }

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  reverseArrayRecursive(nums.size(), nums);
  for (auto i : nums) {
    cout << i;
  }

  return 0;
}