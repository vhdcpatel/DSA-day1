#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

class Vehicle {
  public:
    string brand = "ford";
    void honk(){
      cout << "Peeep \n";
    }
};

class Car: public Vehicle {
  public:
    string model = "Mustang";
};


// Multilevel inheritance. 
// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

// => multiple Inheritance:
// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};


// ==> Access modifier for the Inheritance:
// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main(){
  // Example of Inheritance.
  Car myCar1;
  myCar1.honk();
  cout << myCar1.brand + " " + myCar1.model;

  // Multilevel inheritance.
  MyGrandChild myObj;
  myObj.myFunction();


  // Multiple Inheritance.
  MyChildClass myObj1;
  myObj1.myFunction();
  myObj1.myOtherFunction();


  // Access Specifiers.
  Programmer myObj2;
  myObj2.setSalary(50000);
  myObj2.bonus = 15000;
  cout << "Salary: " << myObj2.getSalary() << "\n";
  cout << "Bonus: " << myObj2.bonus << "\n";

  return 0;
}