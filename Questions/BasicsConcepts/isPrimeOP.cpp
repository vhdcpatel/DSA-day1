#include <math.h>

#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

/*
Most optimal
we are going until sqrt of n because all the factors of the n will be less than
sqrt of n because a*b= n then both a and b will be smaller than n.
*/

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