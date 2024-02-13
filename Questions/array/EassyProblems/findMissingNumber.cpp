#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int missingNumberBits(vector<int>& nums) {
  int xor1 = 0;
  for (int i = 0; i < nums.size(); i++) {
    xor1 ^= (i + 1) ^ nums[i];
  }
  return xor1;
}

int missingNumber(vector<int>& nums) {
  int n = nums.size(), sumFind;
  sumFind = ((n) * (n + 1)) / 2;

  for (int num : nums) {
    sumFind -= num;
  }
  return sumFind;
}

int main() { return 0; }