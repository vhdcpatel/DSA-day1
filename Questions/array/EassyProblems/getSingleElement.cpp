#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

int getSingleElementNormal(vector<int> &arr){
	int ans=0;
	for(int i=0;i<arr.size();i++){
		ans ^=arr[i];
	}
	return ans;	
}

int getSingleElement(vector<int> &arr, int low,int high){
    if(low == high)
        return arr[low];
    
    int mid = low +(high-low)/2;

    if ((mid & 1) == 0) {
        if (arr[mid] == arr[mid + 1]) {
            return getSingleElement(arr, mid + 2, high);
        } else {
            return getSingleElement(arr, low, mid);
        }
    } else {
        if (arr[mid] == arr[mid - 1]) {
            return getSingleElement(arr, mid + 1, high);
        } else {
            return getSingleElement(arr, low, mid - 1);
        }
    }
}


int getSingleElement(vector<int> &arr){
    int ans;
	ans = getSingleElement(arr,0,arr.size());
	return ans;	
}

int main(){
 
  return 0;
}