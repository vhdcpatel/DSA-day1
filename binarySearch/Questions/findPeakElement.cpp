#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int findPeakElementBrute(vector<int> &arr) {
  // Write your code here
  /*
  5

  1 8 1 5 3
  */
  // O(n) solution
  // Handling edge cases
  int n = arr.size();
  if (n == 1 || arr[0] > arr[1]) {
    return 0;
  } else if (arr[n - 1] > arr[n - 2]) {
    return n - 1;
  }

  // Iterate through the array to find the peak
  for (int i = 1; i < n - 1; i++) {
    if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
      return i;  // Found a peak
    }
  }

  // little bit more advance code with no separate edge case handling
  //  if ((i == 0 || arr[i - 1] < arr[i])
  //             && (i == n - 1 || arr[i] > arr[i + 1])) {
  //         return i;
  // }

  return -1;
}

int findPeakElement(vector<int> &arr) {
  int n = arr.size();

  // handling the edge cases.
  if (n == 1) {
    return 0;
  } else if (arr[0] > arr[1]) {
    return 0;
  } else if (arr[n - 1] > arr[n - 2]) {
    return n - 1;
  }

  int l = 1, h = n - 2, m;

  while (l <= h) {
    m = l + (h - l) / 2;

    if (arr[m] > arr[m - 1] && arr[m] > arr[m + 1]) {
      return m;
    }
    // To handle the limiting search space.
    // if we are on the left
    if (arr[m] > arr[m - 1]) {
      l = m + 1;
    }
    // if we are on the right side
    else {
      h = m - 1;
    }
  }

  return -1;
}

int main() { return 0; }