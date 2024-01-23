#include <iostream>
#include <vector>
#include <limits.h>
// #include<bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int ans = 0;
    while (x)
    {
        if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
        {
            return 0;
        }
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    return ans;
}

int main()
{
    int ans;
    ans = reverse(123);
    cout << ans;
    return 0;
}