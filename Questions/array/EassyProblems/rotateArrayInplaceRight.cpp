
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int main() { return 0; }

#include <algorithm>

class Solution {
 public:
  // void reverse(vector<int>& nums, int start, int end) {
  //   while (start < end) {
  //     swap(nums[start++], nums[end--]);
  //   }
  // }
  void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    std::reverse(nums.begin(), nums.begin() + n - k);
    std::reverse(nums.begin() + n - k, nums.end());
    std::reverse(nums.begin(), nums.end());
  }
};