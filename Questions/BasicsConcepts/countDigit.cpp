#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

/*
Problem statement

You are given a number ’n’.
Find the number of digits of ‘n’ that evenly divide ‘n’.

Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.

Example:
Input: ‘n’ = 336

Output: 3

Explanation:
336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two
times. Note: You don’t need to print anything. Just implement the given
function.
*/

int countDigits(int n) {
  int count = 0, digit, temp = n;
  while (temp) {
    digit = temp % 10;
    if (digit != 0 && n % digit == 0) {
      count++;
    }
    temp = temp / 10;
  }
  return count;
}

int main() {
  int n = 660, x;
  x = countDigits(n);
  cout << x;
  return 0;
}