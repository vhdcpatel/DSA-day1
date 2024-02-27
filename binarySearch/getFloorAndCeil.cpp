#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	  int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid] == x) {
            return {x, x};
        } else if (x > a[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    int floor = (high >= 0) ? a[high] : -1; 
    int ceil = (low < n) ? a[low] : -1;
    return {floor,ceil};
}

int main(){
 
  return 0;
}