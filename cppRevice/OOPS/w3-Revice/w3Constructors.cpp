#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    MyClass(){        // Constructor
      cout <<"Hello world!"<<"\n"; // Always called when MyClass is created.
    }
};

class Car {
  public:
    string brand; // attribute
    string model;
    int year;
    Car(string x, string y, int z); // Constructor declaration
};

Car:: Car(string a,string b,int c){
      brand = a;
      model = b;
      year = c; 
    }

int main(){
  // MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  // MyClass myObj2;
  // MyClass myObj3;
  Car carObj1("BMW", "X5" ,2001);
  Car carObj2("Ford", "Mustang", 1969);

  cout <<carObj1.brand <<  " "<< carObj1.model<<" "<<carObj1.year << '\n';
  cout <<carObj2.brand <<  " "<< carObj2.model<<" "<<carObj2.year << '\n';
  return 0;
}