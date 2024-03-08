#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int minimumRateToEatBananas(vector<int> v, int h) {
  int low = 1,
      // set the max value of the array to cover all cases through answer will
      // be (1 to h) to handle the not possible case. high = h
      high = *max_element(v.begin(), v.end()), mid;

  while (low < high) {
    mid = low + (high - low) / 2;
    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
      // ans += v[i]/mid;
      // to handel case like 10/3=> 3 and 1 banana will be uneaten to handle
      // this use. add (mid-1) in the numenetor to handle this case.(1 banana in
      // 10/3)
      ans += (v[i] + mid - 1) / mid;
    }
    if (ans > h) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  return low;
}

int main() { return 0; }