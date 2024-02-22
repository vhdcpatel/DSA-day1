#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElementsBetter(vector<int>& a) {
  sort(a.begin(), a.end());

  int maxLength = 1;
  int size = 0;
  // Using last num to handle the repetition.
  int LastNum = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == LastNum + 1) {
      size++;
      LastNum = a[i];
    } else if (a[i] != LastNum) {
      // Start fresh
      LastNum = a[i];
      maxLength = max(maxLength, size);
      size = 1;
    }
  }

  maxLength = max(maxLength, size);
  return maxLength;
}

int longestSuccessiveElementsBest(vector<int>& a) {
  int n = a.size();
  if (n == 0) return 0;
  int longest = 1;
  unordered_set<int> st;

  for (int i = 0; i < n; i++) {
    st.insert(a[i]);
  }

  for (auto it : st) {
    if (st.find(it - 1) == st.end()) {
      int cnt = 1;
      int x = it;
      while (st.find(x + 1) != st.end()) {
        x = x + 1;
        cnt = cnt + 1;
      }
      longest = max(longest, cnt);
    }
  }

  return longest;
}

int main() { return 0; }