#include <iostream>
#include <utility>
#include <vector>

// For example
// #include <math.h>
// #include <string.h>

// To include all header but this will increase the compilation time of the code.
// #include <bits/stdc++.h>
using namespace std;
// Containers for storing data

void learnPair()
{

    pair<int, int> p{1, 3};
    cout << p.first << "-" << p.second;

    // Pair inside pair
    pair<int, pair<int, int>> p2 = {1, {3, 5}};
    cout << p2.first << "--" << p2.second.first << "--" << p2.second.second;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[2].second;
}

void explainVector()
{
    // It has dynamic memory allocation.for array we can't modify the size.
    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(2); // Increase size and insert at the end.

    // pair vector
    vector<pair<int, int>> vPair;

    vPair.push_back({1, 2});
    vPair.emplace_back(3, 4);

    cout << vPair[1].second << endl;

    // Giving size of the vector.(size,and element (if only one given then n instance of that one.))
    vector<int> v(1, 96);
    v.push_back({10});
    v.push_back({20});
    v.push_back({30});
    v.push_back({40});
    v.push_back({50});

    // or just size and value will be any garbage value or zero based on the compiler.
    // (size, value of all)
    vector<int> v3(10, 96);
    cout << "**" << v3[0] << endl;

    // Even if we define size we can push_back and emplace_back and increase the size of the vector.

    // to make copy.????
    vector<int> vCopy(v3);
    // Both have different memory location.
    cout << "Memory Locations" << &vCopy << " " << &v3 << endl;

    // Access the element of the vector.
    cout << v3[0] << v3.at(0);

    // Iterators:
    vector<int>::iterator it = v.begin();
    it = it + 3;
    cout << "Value at the beginnings" << *(it);
    // Just point to the memory is stored.
    vector<int>::reverse_iterator it2 = v.rend();   // First of the vector(last of the first )
    vector<int>::reverse_iterator it3 = v.rbegin(); // last of the vector
}

int main()
{
    explainVector();
    // learnPair();
    return 0;
}