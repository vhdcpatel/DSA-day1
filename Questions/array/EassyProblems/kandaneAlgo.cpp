#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(int a[], int n) {
  int maxSum = 0;
  int currentSum = 0;
  for (int i = 0; i < n; i++) {
    currentSum += a[i];
    if (currentSum > maxSum) {
      maxSum = currentSum;
    }
    if (currentSum < 0) {
      currentSum = 0;
    }
  }
  return maxSum;
}

int main() { return 0; }