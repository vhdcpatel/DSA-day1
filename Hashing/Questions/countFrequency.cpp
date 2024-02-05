#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums) {
  vector<int> frequencyArray(x, 0);

  for (int i = 0; i < n; i++) {
    // cout << nums[i] << frequencyArray[i] << endl;
    frequencyArray[nums[i] - 1]++;
  }

  frequencyArray.resize(n);
  return frequencyArray;
}

int main() {
  vector<int> v1 = {1, 2, 3, 4, 5};
  countFrequency(5, 5, v1);

  return 0;
}