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

int main()
{

    p7(5);

    // p9 is just combination of 7 and 8
    // p7(8);
    // p8(5);
    return 0;
}