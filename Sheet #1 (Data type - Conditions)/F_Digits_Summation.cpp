/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
 Date:  02/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    int lastX = x % 10;
    int lastY = y % 10;

    cout << lastX + lastY;
    return 0;
}
