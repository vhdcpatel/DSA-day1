#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    MyClass(){        // Constructor
      cout <<"Hello world";
    }
};

int main(){
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}