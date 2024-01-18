#include <iostream>
#include <vector>
using namespace std;

// void function
// does not return anything
void printHello()
{
    cout << "Hello World!" << endl;
}

// parameterized void funtion
void printName(string name)
{
    cout << "Hello, " << name << endl;
}

// parameterized return function
int addTwo(int num1, int num2)
{
    return num1 + num2;
}

// Pass by value
void doSomething(int num)
{
    cout << num << endl;
    num += num;
    cout << num << endl;
    num += num;
    cout << num << endl;
}

int main()
{
    // Notes:
    // Function is set of code which perform specific task.
    // Used to modularize the code.
    // Increase readability.
    // Reusability of code.(Use same code multiple times-DRY(Recursion!))

    // Type of function (by me not standards) in the C++:
    // Void
    // return
    // parameterized
    // non parameterized

    // You have initialize the function before calling it(Not JS bro), also

    printHello();
    printName("VHdcoder");
    int results;

    results = addTwo(2, 3);
    cout << "The results of sum is " << results << " " << addTwo(5, 10) << endl;

    // Inbuilt functions
    int num1 = 10, num2 = 20;
    cout << "Min of " << num1 << " and " << num2 << " is " << min(num1, num2) << endl;

    // Something
    int numFun = 10;
    doSomething(numFun);
    cout << numFun << endl;
    // Above is pass by value, so the value of numFun is not changed.
}