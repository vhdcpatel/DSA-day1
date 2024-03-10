// Create a Car class with some attributes

#include<iostream>
//#include<bits/stdc++.h>
using namespace std;


class Car {
  public:
    string brand;
    string model;
    int year; 
};

int main() {
  // Create an object of Car
  Car carModel1;
  carModel1.brand = "BMW";
  carModel1.model = "X5";
  carModel1.year = 1999;

  // Create another object of Car
  Car carModel2;
  carModel2.brand = "Ford";
  carModel2.model = "Mustang";
  carModel2.year = 1969;

  // Print attribute values
  cout << carModel1.brand << " " << carModel1.model << " " << carModel1.year << "\n";
  cout << carModel2.brand << " " << carModel2.model << " " << carModel2.year << "\n";
  return 0;
}