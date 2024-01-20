#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
// #include<bits/stdc++.h>
using namespace std;

// Standards Ranges:
// Range of fundamental data types

// bool: true or false
// char: -128 to 127 or 0 to 255 (depends on signed or unsigned)
// short: -32768 to 32767
// int: -2147483648 to 2147483647
// long: -2147483648 to 2147483647 (same as int on most systems)
// long long: -9223372036854775808 to 9223372036854775807
// float: 1.17549e-38 to 3.40282e+38
// double: 2.22507e-308 to 1.79769e+308
// long double: 3.3621e-4932 to 1.18973e+4932

// Note: The range of pointer types is system-dependent and not specified by the standard.

void printRange()
{
    // Range of fundamental data types
    std::cout << "Range of bool: " << std::boolalpha << std::numeric_limits<bool>::min() << " to " << std::numeric_limits<bool>::max() << "\n";
    std::cout << "Range of char: " << static_cast<int>(std::numeric_limits<char>::min()) << " to " << static_cast<int>(std::numeric_limits<char>::max()) << "\n";
    std::cout << "Range of short: " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << "\n";
    std::cout << "Range of int: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << "\n";
    std::cout << "Range of long: " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << "\n";
    std::cout << "Range of long long: " << std::numeric_limits<long long>::min() << " to " << std::numeric_limits<long long>::max() << "\n";
    std::cout << "Range of float: " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << "\n";
    std::cout << "Range of double: " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::max() << "\n";
    std::cout << "Range of long double: " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double>::max() << "\n";

    // Note: The range of pointer types is system-dependent and not specified by the standard.
}

int main()
{
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s) // Standard: 1 byte\n";
    std::cout << "Size of char: " << sizeof(char) << " byte(s) // Standard: 1 byte\n";
    std::cout << "Size of short: " << sizeof(short) << " byte(s) // Standard: 2 bytes\n";
    std::cout << "Size of int: " << sizeof(int) << " byte(s) // Standard: 4 bytes\n";
    std::cout << "Size of long: " << sizeof(long) << " byte(s) // Standard: 4 bytes (on 32-bit systems), 8 bytes (on 64-bit systems)\n";
    std::cout << "Size of long long: " << sizeof(long long) << " byte(s) // Standard: 8 bytes\n";
    std::cout << "Size of float: " << sizeof(float) << " byte(s) // Standard: 4 bytes\n";
    std::cout << "Size of double: " << sizeof(double) << " byte(s) // Standard: 8 bytes\n";
    std::cout << "Size of long double: " << sizeof(long double) << " byte(s) // Standard: 8 bytes (may vary)\n";

    // Size of pointer types
    std::cout << "Size of pointer to int: " << sizeof(int *) << " byte(s) // Standard: 4 bytes (on 32-bit systems), 8 bytes (on 64-bit systems)\n";
    std::cout << "Size of pointer to double: " << sizeof(double *) << " byte(s) // Standard: 4 bytes (on 32-bit systems), 8 bytes (on 64-bit systems)\n";

    return 0;
}