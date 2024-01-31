#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int bruthForce(int n, int m) {
  int gcd = 1;
  for (int i = 2; i < min(n, m); i++) {
    if (n % i == 0 && m % i == 0) {
      gcd = i;
    }
  }
  return gcd;
}

int euclideanAlgo(int n, int m) {
  int temp;
  while (m != 0) {
    temp = m;
    m = n % m;
    n = temp;
  }
  return n;
}

int main() {
  int ans;
  ans = bruthForce(6, 4);
  ans = euclideanAlgo(4, 6);
  cout << ans;
  return 0;
}