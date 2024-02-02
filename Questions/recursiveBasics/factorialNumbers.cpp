#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

/*
Done with loop but left with recursion.
*/

vector<long long> factorialNumbers(long long n) {
    vector<long long> result;
    
    long long i = 1;
    long long factorial = 1;
    
    while (factorial <= n) {
        result.push_back(factorial);
        i++;
        factorial = factorial * i;
    }
    
    sort(result.begin(), result.end());
    
    return result;
}

int main(){
    vector<long long> ans;
    ans = factorialNumbers(7);
    for (auto it : ans) {
    cout << it << "-";
  }
 
  return 0;
}
