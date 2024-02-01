#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

long reverseBits(long n) {
  long long ans = 0;
  while (n) {
    if (n & 1) {
      2 * ans + 1;
    } else {
      10 * ans + 0;
    }
    n << 1;
  }
}

int main() { return 0; }