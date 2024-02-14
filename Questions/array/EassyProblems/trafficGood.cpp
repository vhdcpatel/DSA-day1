#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;


// Two pointer method.
int traffic(int n, int m, vector<int> arr) {
 int low = 0 , high =0  , count =0 , max_count =0;

 while(high < n){
  if(arr[high] == 0 && m == 0){
   // current is zero and no more flip is left.
   if(arr[low] == 0){
    // removing the old flip
    m++;
   }
   // decreasing count.
   // increasing the lower count.
   count--;
   low++;
  }
  else {
    // checking and increasing the high count.
   if(arr[high] == 0){
    m--;
   }
   count++;
   high++;
  }
  
  // finally storing max possible value.
  max_count = max(max_count, count);
 }
 return max_count;
}

int main(){
 
  return 0;
}