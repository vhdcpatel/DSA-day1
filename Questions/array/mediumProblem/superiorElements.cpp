#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> superiorElementsBrute(vector<int>& a) {
  vector<int> ans;

  bool isSuperior;
  for (int i = 0; i < a.size(); i++) {
    isSuperior = true;
    for (int j = i + 1; j < a.size(); j++) {
      if (a[i] <= a[j]) {
        isSuperior = false;
        break;
      }
    }
    if (isSuperior) {
      ans.push_back(a[i]);
    }
  }
  return ans;
}

vector<int> superiorElements(vector<int>& a) {
  // SC: O(n)
  vector<int> ans;
  int max = INT32_MIN;
  for (int i = a.size() - 1; i > 0; i--) {
    if (a[i] > max) {
      ans.push_back(a[i]);
      max = a[i];
    }
  }
  // TC: O(N*log(N))
  sort(ans.begin(), ans.end());
  return ans;
}

int main() { return 0; }