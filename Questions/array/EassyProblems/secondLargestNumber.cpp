#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
  int max = INT32_MIN, min = INT32_MAX, secondMax = INT32_MIN,
      secondMin = INT32_MAX;
  for (int num : a) {
    if (num > max) {
      secondMax = max;
      max = num;
    } else if (num > secondMax) {
      secondMax = num;
    }
    if (num < min) {
      secondMin = min;
      min = num;
    } else if (num < secondMin) {
      secondMin = num;
    }
  }
  return vector<int>{secondMax, secondMin};
}

int main() { return 0; }