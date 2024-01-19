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
    cout << "Memory location of num in doSomething " << &num << endl;
}

void doSomethingString(string &s)
{
    // Making the first letter of string capital
    s[0] = 'V';
    cout << s << endl;
}

int addTenInEach(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += 10;
    }
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
    cout << "Memory location of num in mail " << &numFun << endl;
    // Both are stored in different memory location.
    // Above is pass by value, so the value of numFun is not changed.

    // One more function which is pass by reference
    string s = "vraj";
    doSomethingString(s);
    cout << s << endl;

    // one more:
    int arr[5] = {1, 2, 3, 4, 5};
    // print array

    // Methods to find array size
    // 1. sizeof(arr)/sizeof(arr[0])
    // 2. arr.size() -> From STL.
    // 3. int len = *(&arr + 1) - arr; // Using the pointer.
    // 4. counting using the loop.
    // 5. end(arr)-begin(arr);

    // Array Goes with reference.
    addTenInEach(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}