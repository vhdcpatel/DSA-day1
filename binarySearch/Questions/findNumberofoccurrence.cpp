#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

int count(vector<int>& arr, int n, int x) {
	int count = 0;
    int low = 0,high = n-1,mid;

    while(low<=high){
        mid = low + (high-low) / 2;

        if(arr[mid] == x){
            count++;
            low = mid-1;
            high = mid+1;
            while(arr[low]==x){
                count++;
                low--;
            }
            while(arr[high]==x){
                count++;
                high++;
            }
            return count;
        }else if(arr[mid]<x){
            low = mid+1;
        }else{
            high = mid-1;
        } 
    }
    return count;

    // Better because above will result in the O(n) in worst case 
    // So use binary search to find upper and lower, cut search space for the arr[low] =x,
    // same as the Get floor and Ceil problem. 
    // Using STL
    // auto it1=lower_bound(arr.begin(),arr.end(),x);
    // auto it2=upper_bound(arr.begin(),arr.end(),x);
    // return it2-it1;
    
}

int main(){
 int ans;
 vector<int> temp = {1,1, 1, 2, 2, 3, 3};
 ans = count(temp,7,3);
 cout <<ans; 
  return 0;
}