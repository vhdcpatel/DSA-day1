#include <math.h>

#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

long reverseBits(long n) {
  int powOfTwo = 31, digit;
  unsigned long ans = 0;

  while (n) {
    // digit = n & 1;
    // ans += digit * pow(2, powOfTwo--);
    ans = ans | (n & 1) << powOfTwo;
    /*
    Very good logic: taking zero and doing n by moving last bit with left
    swift.
    */
    n = n >> 1;
    powOfTwo--;
  }
  return ans;
}

int main() {
  int ans;
  ans = reverseBits(12);
  cout << ans;

  return 0;
}