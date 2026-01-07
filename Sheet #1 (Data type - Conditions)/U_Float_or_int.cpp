/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
 Date:  06/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;

    int intPart = (int)n;

    if (n == intPart)
    {
        cout << "int " << intPart << endl;
    }
    else
    {
        cout << "float " << intPart << " " << n - intPart << endl;
    }

    return 0;
}