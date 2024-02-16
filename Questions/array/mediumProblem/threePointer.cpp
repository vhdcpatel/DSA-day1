#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n)
{   
    int 
    low =0,
    mid = 0,
    high = arr.size()-1;
    while(mid<=high){
        if(arr[mid]==1){
            mid++;
        }else if(arr[mid]==0){
            swap(arr[mid++],arr[low++]);
        }else if(arr[mid]==2){
            swap(arr[mid],arr[high--]);
        }
    }
}

int main(){
 
  return 0;
}