#include <iostream>
#include <vector>
#include <algorithm>
// #include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr, int m)
{
    int low = 0, high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == m)
        {
            // finding the lower bound.
            while (mid > 0 && arr[mid - 1] == m)
            {
                mid--;
            }
            return mid;
        }
        else if (arr[mid] < m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return low;
}

int main()
{

    return 0;
}