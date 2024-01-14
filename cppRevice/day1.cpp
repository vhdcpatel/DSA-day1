#include<iostream>
// #include<bits/stdc++.h>
// Above input for all the header files
using namespace std;

int main() {
    std::cout<<"Hello World!"<<std::endl;
    std::cout<<"from vhdc"<<std::endl;

    /* 
    //This is basic input output

    int x, y;
    cin >> x >> y;

    // cout << "Value of x and y is " << x << " " << y << endl;
    */

    /* 
    This is multiline comment
    Use this to give function description to the function.
    */

    // Data types
    int varName = 10;
    // size 4byte => 4*8 = 32 bits so and on/off 2^32 but the first bit is used for sign so(negative to positive range) 2^31 also -2^31 to 2^31-1, -1 is for 0. a

    long long int varName2 = 10;
    // size 8byte so apply same logic as above

    // float and double.
    float varName3 = 10.5;
    float varName5 = 10;
    cout << varName5 << endl;
    // size 4byte
    // Typically, a float occupies 4 bytes (32 bits).
    // Precision: A float provides about 7 decimal digits of precision.
    // Range: The range is approximately from 1.17549e-38 to 3.40282e+38.

    double varName4 = 10.5;
    // Size: Usually, a double occupies 8 bytes (64 bits).
    // Precision: A double provides about 15 decimal digits of precision
    // Range: The range is approximately from 2.22507e-308 to 1.79769e+308.
    
    //char, String and getline
    char varName7 = 'V';
    // used to store all 256 char in English dictionary.

    string varName6,varName8;
    // cin >> varName6 >> varName8;
    cout<<varName6<<" "<< varName8 << endl;

    // use of get line
    string varName9;
    getline(cin, varName9);
    cout << varName9;

    

    
    return 0;
}


