#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> printNos(int x) {
  if (x == 1) {
    return vector<int>(1, 1);
  } else {
    vector<int> results = printNos(x - 1);

    results.push_back(x);
    return results;
  }
}

vector<string> printNTimes(int n) {}

int main() { return 0; }