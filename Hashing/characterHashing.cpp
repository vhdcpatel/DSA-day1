#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int main() {
  string s1;
  cout << "Enter string value" << endl;
  cin >> s1;

  int charHashArray[128] = {0};
  for (char c : s1) {
    // charHashArray[s1[i] - 'a']++;
    charHashArray[static_cast<int>(c)]++;
  }

  for (int i = 0; i < 128; i++) {
    if (charHashArray[i] != 0)
      cout << static_cast<char>(i) << "-->" << charHashArray[i] << endl;
  }

  // for (char c : s1) {
  //   cout << c << "-->" << charHashArray[static_cast<int>(c)] << endl;
  // }

  return 0;
}