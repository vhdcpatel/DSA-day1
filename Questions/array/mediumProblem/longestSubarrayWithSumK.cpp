#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
  int low = 0, high = 0;
  long long sum = a[0];
  int maxLength = 0;

  while (high < a.size()) {
    while (low <= high && sum > k) {
      sum -= a[low];
      low++;
    }
    if (sum == k) {
      maxLength = max(maxLength, high - low + 1);
    }

    high++;
    if (high < a.size()) sum += a[high];
  }
  return maxLength;
}

int main() { return 0; }