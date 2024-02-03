#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int main() {
  // Make it for the n values.
  int n, m;
  cout << "Enter number of input and max value of input";
  cin >> n;
  cin >> m;
  int arr[n];
  int frequencyArray[m];
  // Got some error while filling with zero with {0}
  fill(frequencyArray, frequencyArray + m, 0);

  // Taking input
  cout << "Enter Input value of array";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Precompute.
  // Just give number up to n;
  for (int i = 0; i < n; i++) {
    frequencyArray[arr[i]] += 1;
  }

  // Get input and find it's frequency.
  cout << "Enter number of times you want to search.";
  int q;
  cin >> q;

  cout << "Give number";
  while (q--) {
    int number;
    cin >> number;
    cout << number << "->" << frequencyArray[number] << endl;
  }

  // for (int i = 0; i < 5; i++) {
  //   cout << i << "->" << frequencyArray[i] << endl;
  // }

  return 0;
}