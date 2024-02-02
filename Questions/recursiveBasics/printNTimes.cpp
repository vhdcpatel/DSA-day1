#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<string> printNTimes(int n) {
  if (n <= 0) {
    return vector<string>();
  }
  vector<string> res = printNTimes(n - 1);

  res.push_back("Coding Ninjas");

  return res;
}

void printVector(vector<string> vt1) {
  cout << endl;
  for (auto it : vt1) {
    cout << it << " ";
  }
  cout << endl;
}

int main() {
  vector<string> ans;
  ans = printNTimes(4);
  printVector(ans);

  return 0;
}