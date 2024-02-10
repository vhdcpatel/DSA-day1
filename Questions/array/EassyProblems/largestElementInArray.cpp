#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
  int max = arr[0];
  for (int num : arr) {
    if (num > max) {
      max = num;
    }
  }
  return max;
}

int main() { return 0; }