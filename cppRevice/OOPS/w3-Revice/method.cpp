#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

class MyClass {        // The class
  public:              // Access specifier
    void myMethodToSayHello(string name) {  // Method/function defined inside the class
      cout << "Hello"<<name<<'\n';
    }
};

class MyClass2 {        // The class
  public:              // Access specifier
    void myMethodForSayHey();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass2::myMethodForSayHey(){
  cout << "Hey there"<<"\n";
}


int main() {
  MyClass myObj;     // Create an object of MyClass
  MyClass2 myObj2;
  myObj2.myMethodForSayHey();
  myObj.myMethodToSayHello("Vraj");  // Call the method
  return 0;
}