#include <iostream>
// using namespace std;

class Employee {         // class 
  public:                // access modifier
    // std::string Name;    // attributes
    // better way
    char name[20];    
    std::string Company;
    int Age;
    Employee(){
      
    }
    void sayHello(){     // Method.
      std::cout<< "Hello,"<<name;
    }
    // std::int Age;
};

int main() {
  Employee empNo1;
  return 0;
}