#include <math.h>

#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  bool ans;
  ans = isPrime(13);
  cout << ans;
  return 0;
}