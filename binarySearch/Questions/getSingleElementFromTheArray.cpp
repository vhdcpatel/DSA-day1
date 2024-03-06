#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int singleNonDuplicateBrute(vector<int>& arr) {
  int n = arr.size();

  // Handle edge case.
  if (n == 1) {
    return arr[0];
  }

  // for (int i = 0; i < n; i++) {
  //   if (i == 0) {
  //     if (arr[i] != arr[i + 1]) {
  //       return arr[i];
  //     }
  //   } else if (i == (n - 1)) {
  //     if (arr[i] != arr[i - 1]) {
  //       return arr[i];
  //     }
  //   } else {
  //     if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
  //       return arr[i];
  //     }
  //   }
  // }

  // My logic
  //    int n = nums.size();
  for (int i = 0; i < n - 1; i += 2) {
    if (arr[i] != arr[i + 1]) {
      return arr[i];
    }
  }
  return arr[n - 1];
  // If the single element is the last element in the array

  return -1;
}

int singleNonDuplicate(vector<int>& arr) {
  int n = arr.size();

  // To handle edge case.
  if (n == 1) {
    return arr[0];
  } else if (arr[0] != arr[1]) {
    return arr[0];
  } else if (arr[n - 1] != arr[n - 2]) {
    return arr[n - 1];
  }

  int l = 0, h = n - 1, m;
  while (l < h) {
    m = l + (h - l) / 2;

    if (arr[m] != arr[m - 1] && arr[m] != arr[m + 1]) {
      return arr[m];
    }

    if ((m & 1) == 0) {
      if (arr[m] == arr[m + 1]) {
        l = m + 2;
      } else {
        h = m - 1;
      }
    } else {
      if (arr[m] == arr[m - 1]) {
        l = m + 1;
      } else {
        h = m;
      }
    }
  }
  return -1;
}

int getSingleElementRecursion(vector<int>& arr, int low, int high) {
  if (low == high) return arr[low];

  int mid = low + (high - low) / 2;

  if ((mid & 1) == 0) {
    if (arr[mid] == arr[mid + 1]) {
      return getSingleElementRecursion(arr, mid + 2, high);
    } else {
      return getSingleElementRecursion(arr, low, mid);
    }
  } else {
    if (arr[mid] == arr[mid - 1]) {
      return getSingleElementRecursion(arr, mid + 1, high);
    } else {
      return getSingleElementRecursion(arr, low, mid - 1);
    }
  }
}

int main() { return 0; }