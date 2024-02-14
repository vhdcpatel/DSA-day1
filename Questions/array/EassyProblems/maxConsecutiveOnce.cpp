#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

 int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count +=1;
            }else{
              ans = max(ans,count);
              count = 0;
            }
        }
        ans = max(ans,count);
        return ans;
}


int main(){
 
  return 0;
}