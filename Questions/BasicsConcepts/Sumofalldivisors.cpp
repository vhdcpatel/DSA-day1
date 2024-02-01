#include <math.h>

#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int sumOfAllDivisorsBruteForce(int n) {
  int sum = 0;
  for (int j = 1; j <= n; j++) {
    for (int i = 1; i <= j; i++) {
      if (j % i == 0) {
        sum += i;
      }
    }
  }
  return sum;
}

int sumOfAllDivisorsSol2(int n) {
  int sum = 0;
  for (int j = 1; j <= n; j++) {
    for (int i = 1; i <= sqrt(j); i++) {
      if (j % i == 0) {
        sum += i;
        if (i != j / i) {
          sum += j / i;
        }
      }
    }
  }
  return sum;
}

/*
Most optimal
n/i => counts the times this divisor appear for the divions.
*i => to get the sum.

*/
int sumOfAllDivisors(int n) {
  int ans = 0;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      ans += i;
      if (i != n / i) {
        ans += n / i;
      }
    }
  }
  return ans;
}

int main() { return 0; }