#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

void printer(int n) {
  if (n < 0) return;

  printer(n - 1);
  // Best use of var after recursion.
  cout << n << " ";
}

int main() {
  printer(10);
  return 0;
}