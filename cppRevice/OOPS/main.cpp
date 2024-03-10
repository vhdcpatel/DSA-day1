#include <iostream>
// using namespace std;

class Employee {         // class 
  public:                // access modifier
    std::string Name;    // attributes    
    std::string Company;
    int Age;
    void sayHello(){     // Method.
      std::cout<< "Hello,"<<Name;
    }
    // std::int Age;
};

int main() {
  Employee empNo1;
  return 0;
}