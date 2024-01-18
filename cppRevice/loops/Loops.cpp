#include <iostream>
#include <vector>
// #include<algorithm>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    // For Loop:
    // i is local scoped variable is only available inside the for loop, not outside.
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    // While Loop:
    int j = 0;
    while (j < 10)
    {
        cout << j << endl;
        j++;
    }

    // do while loop
    int k = 2;
    do
    {
        cout << k << endl;
        k++;
    } while (k <= 1);
    cout << k << endl;

    return 0;
}