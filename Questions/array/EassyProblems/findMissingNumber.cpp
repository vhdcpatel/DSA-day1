#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
  int n = nums.size(), sumFind;
  sumFind = ((n) * (n + 1)) / 2;

  for (int num : nums) {
    sumFind -= num;
  }
  return sumFind;
}

int main() { return 0; }