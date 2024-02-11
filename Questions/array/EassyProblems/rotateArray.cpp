#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
  if (n <= 1) return arr;

  int temp = arr[0];
  for (int i = 0; i < n; i++) {
    arr[i] = arr[(i + 1) % n];
  }
  arr[n - 1] = temp;
  return arr;
}
int main() { return 0; }