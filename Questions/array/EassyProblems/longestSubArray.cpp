#include <algorithm>
#include <iostream>
#include <map>
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

int longestSubarrayWithSumKBetter(vector<int> a, long long k) {
  map<long long, int> preSumMap;
  long long sum = 0;
  int maxLength = 0;
  for (int i = 0; i < a.size(); i++) {
    sum += a[i];
    if (sum == k) {
      maxLength = max(maxLength, i + 1);
    }
    long long rem = sum - k;
    if (preSumMap.find(rem) != preSumMap.end()) {
      int len = i - preSumMap[rem];
      maxLength = max(len, maxLength);
    }
    if (preSumMap.find(sum) == preSumMap.end()) {
      preSumMap[sum] = i;
    }
  }
  return maxLength;
}

int main() {
  vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};

  return 0;
}