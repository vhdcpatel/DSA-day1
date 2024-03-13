#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

// brute
int missingKBrute(vector<int> vec, int n, int k) {
  for (int i = 0; i < n; i++) {
    if (vec[i] <= k) {
      k++;
    } else {
      break;
    }
  }

  return k;
};

// optimized
int missingK(vector<int> vec, int n, int k){

};

int main() { return 0; }