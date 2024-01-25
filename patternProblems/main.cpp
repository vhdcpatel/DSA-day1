#include <iostream>
using namespace std;

void p1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void p4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void p5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << (j + 1);
        }
        cout << endl;
    }
}

// Good one
void p7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < (n - i) - 1; j++)
        {
            cout << " ";
        }
        // Star
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        // space
        // We don't need to handle the space at the end.

        cout << endl;
    }
}

void p8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * (n - i) - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Good problem
void p10(int n)
{
    int limit;
    for (int i = 0; i <= (2 * n - 1); i++)
    {
        if (i < n)
        {
            limit = i;
        }
        else
        {
            limit = (n - i % n);
            // or 2n-i
        }
        // if (i <= n)
        // {
        //     for (int j = 0; j < i; j++)
        //     {
        //         cout << "*";
        //     }
        // }
        // else
        // {
        for (int j = 0; j < limit; j++)
        {
            cout << "*";
        }
        // }

        cout << endl;
    }
}

// not the same
void p10E(int n)
{
    bool num = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (num)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
            num = !num;
        }
        cout << endl;
    }
}

void p11(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            // even row
            start = 0;
        }
        else
        {
            start = 1;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void p12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int s = 1; s <= 2 * (n - i); s++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }

        cout << endl;
    }
}

void p13(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

void p14(int n)
{
    char char1 = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << static_cast<char>(char1 + j);
        }
        cout << endl;
    }
}

void p15(int n)
{
    char char1 = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < (n - i); j++)
        {
            cout << static_cast<char>(char1 + j);
        }
        cout << endl;
    }
}

void p16(int n)
{
    char char1 = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << static_cast<char>(char1 + i);
        }
        cout << endl;
    }
}

void p17(int n)
{
    char char1 = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << static_cast<char>(char1 + j) << "";
        }
        // Heavy level coding.
        for (int k = i; k > 0; k--)
        {

            cout << static_cast<char>(char1 + k - 1);
        }
        cout << endl;
    }
}

void p18(int n)
{
    // Does't work for other then specific.
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void p19(int n)
{
    int endst, endsp;
    for (int i = 0; i < 2 * (n); i++)
    {
        if (i < n)
        {
            endst = n - i;
            endsp = 2 * i;
        }
        else
        {
            endst = i - n + 1;
            endsp = 2 * (n - i % n - 1);
            // or my logic 2*(n-i%n-1))
        }
        for (int j = 0; j < endst; j++)
        {
            std::cout << "*";
        }
        for (int j = 0; j < endsp; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < endst; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void p20(int n)
{
    int limit, limitSpace = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i > n)
        {
            limit = 2 * n - i;
        }
        else
        {
            limit = i;
        }
        // start
        for (int j = 0; j < limit; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < limitSpace; k++)
        {
            cout << " ";
        }
        // start
        for (int j = 0; j < limit; j++)
        {
            cout << "*";
        }
        if (i < n)
        {
            limitSpace -= 2;
        }
        else
        {
            limitSpace += 2;
        }
        cout << endl;
    }
}

void p21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - 1 || i == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void p22(int n)
{
    int top, left, right, bottom;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            top = i;
            left = j;
            right = 2 * (n - 1) - j;
            bottom = 2 * (n - 1) - i;
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

int main()
{

    p22(4);
    // p9 is just combination of 7 and 8
    // p7(8);
    // p8(5);
    return 0;
}