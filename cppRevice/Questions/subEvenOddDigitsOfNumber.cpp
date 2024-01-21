#include <iostream>
#include <vector>
#include <algorithm>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, even_sum = 0, odd_sum = 0;
    // int digit;
    cin >> num;
    while (num)
    {
        // My old code.
        // digit = num % 10;
        // if (digit % 2 == 0)
        // {
        //     even_sum += digit;
        // }
        // else
        // {
        //     odd_sum += digit;
        // }
        // num /= 10;

        // More optimized code
        if (num % 2 == 0)
        {
            even_sum += num % 10;
        }
        else
        {
            odd_sum += num % 10;
        }
        num /= 10;
    }
    cout << even_sum << " " << odd_sum;
    return 0;
}