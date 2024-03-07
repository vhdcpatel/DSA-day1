#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int getPowerN(int num, int m) {
  int ans = 1;
  for (int i = 1; i <= m; i++) {
    ans *= num;
  }
  return ans;
}

int NthRoot(int n, int m) {
  int l = 0, h = n;
  long long mid;

  while (l <= h) {
    mid = l + (h - l) / 2;
    long long power = getPowerN(mid, n);
    if (power == m) {
      return mid;
    } else if (power > m) {
      h = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return -1;
}

int main() { return 0; }