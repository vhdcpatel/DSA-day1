#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

class Employee {
  private:
    int salary;
  public:
    // set
    Employee(){
      salary = 0;
    }
    void setSalary(int s){
      salary = s;
    };

    // get salary
    int getSalary(){
      return salary;
    }
};  

int main(){
  Employee myEmp1;
  myEmp1.setSalary(10000);
  cout << "My current salary is "<< myEmp1.getSalary();
  // If we call earlier it will return garbage value.\

  return 0;
}