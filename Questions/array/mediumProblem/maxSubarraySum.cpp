#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n) {
  long long maxSum = INT32_MIN, currSum = 0;

  for (int i = 0; i < arr.size(); i++) {
    currSum += arr[i];

    if (currSum > maxSum) {
      maxSum = currSum;
    }
    if (currSum < 0) {
      currSum = 0;
    }
  }
  return maxSum;
}

int main() { return 0; }