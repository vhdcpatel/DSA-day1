#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int num, ans = 1;
    cin >> num;
    if (num < 3)
        cout << ans;
    else
    {
        // Calculation using Binet's Formula:
        double sqrt5 = sqrt(5);
        // goldenRatio (phi)
        double phi = (1 + sqrt5) / 2;
        double fib = round((pow(phi, num) - pow(1 - phi, num)) / sqrt5);
        cout << static_cast<int>(fib);
    }
    return 0;
}