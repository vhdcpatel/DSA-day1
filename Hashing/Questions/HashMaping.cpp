#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> getFrequencies(vector<int> &v) {
  map<int, int> mpp1;
  for (int i = 0; i < v.size(); i++) {
    mpp1[v[i]]++;
  }

  int maxKey = -1, maxFrequency = -1;
  int minKey = -1, minFrequency = std::numeric_limits<int>::max();

  for (const auto &pair : mpp1) {
      if (pair.second > maxFrequency) {
          maxKey = pair.first;
          maxFrequency = pair.second;
      }
      if (pair.second < minFrequency) {
          minKey = pair.first;
          minFrequency = pair.second;
      }
  }

  vector<int> ans = {maxKey, minKey};
  return ans;
}



int main(){
 
  return 0;
}