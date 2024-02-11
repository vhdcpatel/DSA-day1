#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
  // Creating separate index for unique values. and then limit my array sizes
  // upto that.
  int newSize = 1;
  for (int i = 1; i < n; i++) {
    if (arr[i] != arr[i - 1]) {
      arr[newSize] = arr[i];
      newSize++;
    }
  }
  arr.resize(newSize);
  // arr.erase(arr.begin() + newSize, arr.end());
  return arr.size();
}

int main() {
  int ans;
  vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5};
  ans = removeDuplicates(arr, 10);
  cout << ans;

  return 0;
}