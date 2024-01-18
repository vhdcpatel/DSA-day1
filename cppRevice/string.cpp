#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string name = "Vraj Patel";
    // name[0] = "P"; // We can't reassign the string like this
    int length = name.length();
    cout << "Last element of the string" << endl
         << name[length - 1] << endl;

    return 0;
}