/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
 Date:  04/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
    {
        cout << "Multiples";
    }
    else
    {
        cout << "No Multiples";
    }
    return 0;
}