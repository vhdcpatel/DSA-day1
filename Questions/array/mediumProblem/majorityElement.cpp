#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int majorityBruteForce(vector<int> &arr) {
  int count = 0;
  int n = arr.size();
  for (int i = 0; i < arr.size(); i++) {
    count = 0;
    for (int j = 0; j < arr.size(); j++) {
      if (arr[i] == arr[j]) count++;
    }
    if (count > n / 2) {
      return arr[i];
    }
  }
  return -1;
}

// Better solution
// Use hashing
int findMajorityElement(vector<int> &arr) {
  map<int, int> count;
  // O(n*log(n))
  for (int i = 0; i < arr.size(); i++) {
    count[arr[i]]++;
  }

  // Iterating in the map.
  // O(n)
  for (auto it : count) {
    if (it.second > (arr.size() / 2)) {
      return it.first;
    }
  }
  return -1;
}

// Most optimal approach.
// Moore's voting algorithm.
int majorityElement(vector<int> v) {
  int element = -1, count = 0;
  // apply moore's voting algo and find majority element.
  for (int i = 0; i < v.size(); i++) {
    if (count == 0) {
      count = 1;
      element = v[i];
    } else if (v[i] == element) {
      count++;
    } else {
      count--;
    }
  }
  // verify the element with counter by rotating array for
  count = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == element) count++;
  }
  if (count > (v.size() / 2)) {
    return element;
  }
  return -1;
}

int main() { return 0; }