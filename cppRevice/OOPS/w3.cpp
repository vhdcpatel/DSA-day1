#include <algorithm>
#include <iostream>
#include <vector>
//  using namespace std;

class MyClass {          // The class name
 public:                 // Access specifier for limiting access
  int myNum;             // Attribute (int variable)
  std::string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass
  MyClass myObj2;

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";

  myObj2.myNum = 96;
  myObj2.myString = "vhdc";

  // Print attribute values
  std::cout << myObj2.myNum << "\n";
  std::cout << myObj2.myString << "\n";
  return 0;
}