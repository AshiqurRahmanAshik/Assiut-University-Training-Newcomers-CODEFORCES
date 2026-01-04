/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
 Date:  05/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (x >= 'a' && x <= 'z')
        cout << char(x - 32) << endl;
    else
    {
        cout << char(x + 32) << endl;
    }
    return 0;
}