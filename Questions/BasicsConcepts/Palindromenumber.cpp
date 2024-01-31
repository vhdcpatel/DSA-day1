#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

bool palindrome(int n) {
  int temp = n, digit, reverseNum = 0;
  while (temp) {
    digit = temp % 10;
    reverseNum = reverseNum * 10 + digit;
    temp /= 10;
  }
  return (n == reverseNum);
}

int main() {
  bool ans;
  ans = palindrome(51416);
  cout << ans;

  return 0;
}