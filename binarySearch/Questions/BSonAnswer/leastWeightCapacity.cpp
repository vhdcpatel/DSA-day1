#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int findDays(vector<int> &weights, int cap) {
  // cap is limit we are checking for one day.
  int day = 1;
  int load = 0;
  int n = weights.size();
  for (int i = 0; i < n; i++) {
    if (weights[i] + load > cap) {
      day += 1;
      load = weights[i];  // reset the current weight and move to next day.
    } else {
      load += weights[i];
    }
  }
  return day;
}

// brute force:

int leastWeightCapacity(vector<int> &weights, int d) {
  // Find the maximum and the summation:
  int maxi = *max_element(weights.begin(), weights.end());
  int sum = accumulate(weights.begin(), weights.end(), 0);

  for (int i = maxi; i <= sum; i++) {
    if (findDays(weights, i) <= d) {
      return i;
    }
  }
  // dummy return statement:
  return -1;
}

// better approach.
int leastWeightCapacity(vector<int> &weights, int d) {
  /*
  The range sum of all weight
  to max.
  */
  // Defininig the search space.
  int low = *max_element(weights.begin(), weights.end());
  int high = accumulate(weights.begin(), weights.end(), 0);
  int mid, numberOfDays;

  while (low <= high) {
    mid = low + (high - low) / 2;
    numberOfDays = findDays(weights, mid);
    if (numberOfDays <= d) {
      // check for lower values
      // reset the high
      high = mid - 1;
    } else {
      // check for higher answers.
      low = mid + 1;
    }
  }
  return low;
}

int main() { return 0; }