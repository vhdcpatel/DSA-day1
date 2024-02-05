#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

bool checkIsPalindrome(int start, int end, string s) {
  if (s[start] != s[end]) {
    return false;
  }
  if (start > end) {
    return true;
  }
  return checkIsPalindrome(start + 1, end - 1, s);
}

bool isPalindrome(string &str) {
  return checkIsPalindrome(0, str.size() - 1, str);
}

int main(){
 
  return 0;
}