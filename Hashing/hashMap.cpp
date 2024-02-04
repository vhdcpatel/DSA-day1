#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter number of array size.";
  cin >> n;
  int arr[n];
  cout << "Enter array value.";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // Pre-compute and make the map.
  // If n > n^10^9 then go for long long.
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  int q;
  cout << "Enter nUmber of Input.";
  cin >> q;
  while (q--) {
    cout << "Enter Input number" << q << "-->";
    int num;
    cin >> num;
    cout << mpp[num] << endl;
    // check and return the map value.
  }

  // Iterate the full map.
  cout << endl;
  for (auto it : mpp) {
    cout << it.first << "-->" << it.second << endl;
  }

  return 0;
}