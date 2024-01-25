#include <iostream>
#include <utility>
#include <vector>

// For example
// #include <math.h>
// #include <string.h>

// To include all header but this will increase the compilation time of the code.
// #include <bits/stdc++.h>

using namespace std;

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

using namespace std;

int main()
{
    learnPair();
    return 0;
}