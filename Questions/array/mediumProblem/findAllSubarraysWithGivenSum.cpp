#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

// Sub Array-> continuous sub part of array.
// SubSequence: randomly selected part of the array.

int findAllSubarraysWithGivenSumBrute(vector<int>& arr, int k) {
  int finalCount = 0;
  int sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i; i < arr.size(); j++) {
      sum += arr[j];
      // Here we have all possible combination of the array use i to j with
      // slicing.
      if (sum == k) {
        finalCount++;
      }
    }
    sum = 0;
  }
  return finalCount;
}

int findAllSubarraysWithGivenSum(vector<int>& arr, int k) {
  // map<long long, int> preSumMap;
  // unorder for better lookup.
  unordered_map<long long, int> preSumMap;
  long long prevSum = 0;
  int count = 0;
  preSumMap[0] = 1;
  // O(n* log(n))
  // log(n) for insertions
  for (int i = 0; i < arr.size(); i++) {
    prevSum += arr[i];
    // going backward for checking if there are any combinations in the back.
    long long remove = prevSum - k;
    // if (preSumMap.find(remove) != preSumMap.end()) {
    // No need to check as it will be zero otherwise.
    // Unordered map: best,avg is O(1) and for worst O(n);
    count += preSumMap[remove];
    // }
    preSumMap[prevSum]++;
  }
  return count;
}

int main() { return 0; }