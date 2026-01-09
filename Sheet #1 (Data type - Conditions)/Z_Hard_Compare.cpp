/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
 Date:  09/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double A, B, C, D;
    cin >> A >> B >> C >> D;

    // Compare using logarithms
    long double left = B * log(A);
    long double right = D * log(C);

    if (left > right)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
