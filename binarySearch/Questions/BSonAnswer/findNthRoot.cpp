#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int getPowerNAndCompare(int num, int n, int m) {
  long long ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= num;
    if (ans > m) {
      return 0;
    }
  }
  if (ans == m) return 1;

  return 2;
}

int NthRoot(int n, int m) {
  int l = 0, h = m;
  long long mid;

  while (l <= h) {
    mid = l + (h - l) / 2;
    int ans = getPowerNAndCompare(mid, n, m);
    if (ans == 1) {
      return mid;
    } else if (ans == 0) {
      h = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return -1;
}

int main() { return 0; }