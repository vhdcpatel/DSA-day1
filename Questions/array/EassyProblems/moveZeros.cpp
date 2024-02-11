#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
  // my old Logic
  /*
  int newIndex = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != 0) {
      a[newIndex++] = a[i];
    }
  }
  for (int index = newIndex; index < a.size(); ++index) {
    a[index] = 0;
  }
  */
  int newIndex = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] != 0) {
      swap(a[newIndex++], a[i]);
    }
  }
  return a;
}

int main() { return 0; }