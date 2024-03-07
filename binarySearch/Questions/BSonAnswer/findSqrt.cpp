#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n) {
  int l = 0, h = n;
  long long m;

  while (l <= h) {
    m = l + (h - l) / 2;
    if (m * m == n) {
      return m;
    } else if (m * m > n) {
      h = m - 1;
    } else {
      l = m + 1;
    }
  }
  return h;
}

int main() { return 0; }