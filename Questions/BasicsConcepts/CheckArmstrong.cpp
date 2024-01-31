#include <math.h>

#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int getNumDigits(int n) {
  int count = 0;
  while (n) {
    count++;
    n = n / 10;
  }
  return count;
}

bool checkArmstrong(int n) {
  int palNo = 0, digit, temp = n, tn;
  tn = getNumDigits(n);
  while (temp != 0) {
    digit = temp % 10;
    palNo = palNo + pow(digit, tn);
    temp = temp / 10;
  }
  return (palNo == n);
}

int main() {
  bool ans;
  ans = checkArmstrong(1634);
  cout << ans;
  return 0;
}