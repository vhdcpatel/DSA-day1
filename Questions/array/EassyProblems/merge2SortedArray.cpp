#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
  map<int, int> freq;
  vector<int> Union;
  for (int i = 0; i < n; i++) freq[arr1[i]]++;
  for (int i = 0; i < m; i++) freq[arr2[i]]++;
  for (auto& it : freq) Union.push_back(it.first);
  return Union;
}

// vector<int> sortedArrayOptimal(vector<int> a, vector<int> b) {
// }
vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0;
  vector<int> Union;
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) {
    if (Union.back() != arr1[i]) Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) {
    if (Union.back() != arr2[j]) Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}

vector<int> sortedArray(vector<int> a, vector<int> b) {
  set<int> s;
  vector<int> ans;
  for (int i = 0; i < a.size(); i++) s.insert(a[i]);
  for (int i = 0; i < b.size(); i++) s.insert(b[i]);
  for (auto& it : s) ans.push_back(it);
  return ans;
}

int main() { return 0; }