#include <iostream>
#include <vector>
// #include<algorithm>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    // Only work for 1 to 10^4 not work  for 0;
    int num, ans = 1;
    cin >> num;
    if (num < 3)
        cout << ans;

    else
    {
        int first_element = 1, second_element = 1;
        for (int i = 3; i <= num; i++)
        {
            ans = first_element + second_element;
            first_element = second_element;
            second_element = ans;
        }
        cout << ans;
    }

    return 0;
}