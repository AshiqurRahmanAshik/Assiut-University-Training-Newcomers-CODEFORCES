/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
 Date:  06/01/26
*/

#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;

    int firstDigit = X / 1000;

    if (firstDigit % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";

    return 0;
}
