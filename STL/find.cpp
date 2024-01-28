#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> mpp;
  // Right way to find anything.(example of map but work for anything)
  auto it = mpp.find(2);
  // In this example, the if (it != mpp.end()) condition checks if the key is
  // found, and if so, it proceeds to print the value and check if it's the last
  // key. If the key is not found, it prints "Key not found."

  if (it != mpp.end()) {
    cout << "Key found! Value: " << it->second << endl;

    // Check if it is the last element
    if (next(it) == mpp.end()) {
      cout << "This is the last key in the map." << endl;
    }
  } else {
    cout << "Key not found." << endl;
  }

  return 0;
}