/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
 Date:  04/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << min({a, b, c}) << " " << max({a, b, c});
    return 0;
}