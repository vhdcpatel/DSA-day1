#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> printNos(int x) {
  vector<int> ans;
  if (x < 1) {
    return vector<int>(1, 1);
  }
  ans = printNos(x - 1);
  ans.insert(ans.begin(), x);

  return ans;
}

int main() {
  vector<int> ans;
  ans = printNos(4);
  cout << ans[0];
  return 0;
}