#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

// long but optimal;
int firstOccurrence(vector<int>& arr, int n, int k) {
  int low = 0, high = n - 1;
  int first = -1;

  while (low <= high) {
    int mid = (low + high) / 2;
    // maybe an answer
    if (arr[mid] == k) {
      first = mid;
      // look for smaller index on the left
      high = mid - 1;
    } else if (arr[mid] < k) {
      low = mid + 1;  // look on the right
    } else {
      high = mid - 1;  // look on the left
    }
  }
  return first;
}

int lastOccurrence(vector<int>& arr, int n, int k) {
  int low = 0, high = n - 1;
  int last = -1;

  while (low <= high) {
    int mid = (low + high) / 2;
    // maybe an answer
    if (arr[mid] == k) {
      last = mid;
      // look for larger index on the right
      low = mid + 1;
    } else if (arr[mid] < k) {
      low = mid + 1;  // look on the right
    } else {
      high = mid - 1;  // look on the left
    }
  }
  return last;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
  int first = firstOccurrence(arr, n, k);
  if (first == -1) return {-1, -1};
  int last = lastOccurrence(arr, n, k);
  return {first, last};
}

int count(vector<int>& arr, int n, int x) {
  pair<int, int> ans = firstAndLastPosition(arr, n, x);
  if (ans.first == -1) return 0;
  return (ans.second - ans.first + 1);
}

// Mine
int count(vector<int>& arr, int n, int x) {
  int count = 0;
  int low = 0, high = n - 1, mid;

  while (low <= high) {
    mid = low + (high - low) / 2;

    if (arr[mid] == x) {
      count++;
      low = mid - 1;
      high = mid + 1;
      while (arr[low] == x) {
        count++;
        low--;
      }
      while (arr[high] == x) {
        count++;
        high++;
      }
      return count;
    } else if (arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return count;

  // Better because above will result in the O(n) in worst case
  // So use binary search to find upper and lower, cut search space for the
  // arr[low] =x, same as the Get floor and Ceil problem.

  // Using STL
  // auto it1=lower_bound(arr.begin(),arr.end(),x);
  // auto it2=upper_bound(arr.begin(),arr.end(),x);
  // return it2-it1;
}

int main() {
  int ans;
  vector<int> temp = {1, 1, 1, 2, 2, 3, 3};
  ans = count(temp, 7, 3);
  cout << ans;
  return 0;
}