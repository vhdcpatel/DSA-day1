#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

void findFirstOccurrence(int X) {
  cout << "In the function";
  // Q1: find the first occurrence of a X in a sorted array. If it does not
  // exits, print -1.
  vector<int> q1v = {1, 4, 4, 4, 4, 9, 9, 10, 11};

  int ind = lower_bound(q1v.begin(), q1v.end(), X) - q1v.begin();

  if (ind != sizeof(q1v) / sizeof(q1v[0]) && q1v[ind] == X)
    cout << endl << ind << endl;
  else
    cout << endl << -1 << endl;
}

void findLastOccurrence(int x) {
  vector<int> q1v = {1, 4, 4, 4, 4, 9, 9, 10, 11};
}

int main() {
  vector<int> v1 = {2, 4, 5, 7, 9, 10, 12, 56, 96, 100};

  // sort in order to apply the binary search.
  sort(v1.begin(), v1.end());

  // binary search from STL.
  bool res1 = binary_search(v1.begin(), v1.end(), 4);
  cout << res1 << endl;

  bool res2 = binary_search(v1.begin(), v1.end(), 13);
  cout << res2 << endl;

  // Lower bound and upper bound.

  // If present points to the pointer of the the location.
  auto ind1 = lower_bound(v1.begin(), v1.end(), 4) - v1.begin();

  // if not present then points to the immediate next upper(next bigger)
  auto ind2 = lower_bound(v1.begin(), v1.end(), 8) - v1.begin();

  auto ind3 = lower_bound(v1.begin(), v1.end(), 101) - v1.begin();

  cout << endl
       << "Following return the index: " << ind1 << "  " << ind2 << " " << ind3
       << endl;

  // Upper Bound.
  // Return the iterator pointing to the next element then to the pass element.

  auto ind4 = upper_bound(v1.begin(), v1.end(), 4) - v1.begin();
  auto ind5 = upper_bound(v1.begin(), v1.end(), 101) - v1.begin();

  cout << endl
       << "Following value at returned index. " << v1[ind4]
       << ": For Last get garbage value so use ind5-- " << v1[ind5] << endl;

  // LowerBound and upperBound work on log(n) time complexity.

  // Checking end
  // if (ind1 != v1.end()) {
  //   int ind1 = distance(v1.begin(), ind1);
  //   cout << "Lower Bound of 4 at index: " << ind1 << endl;
  // } else {
  //   cout << "Element not found." << endl;
  // }

  findFirstOccurrence(4);
  findFirstOccurrence(5);
  findFirstOccurrence(9);

  return 0;
}