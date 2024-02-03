#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

unordered_map<int, int> memo;

/*
Optimized
int fib(int n) {
        if(!n) return 0;
        int f1=0;
        int f2=1;
        for(int i=1;i<n;i++){
            int temp=f1+f2;
            f1=f2;
            f2=temp;
        }
        return f2;
}
*/

int fib2(int n) {
  if (!n) return 0;
  int f1 = 0;
  int f2 = 1;
  for (int i = 1; i < n; i++) {
    int temp = f1 + f2;
    f1 = f2;
    f2 = temp;
  }
  return f2;
}

int fib(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;

  // Check if the result is already memoized
  if (memo.find(n) != memo.end()) {
    return memo[n];
  }

  // Calculate and memoize the result
  memo[n] = fib(n - 1) + fib(n - 2);

  return memo[n];
}

int main() { return 0; }