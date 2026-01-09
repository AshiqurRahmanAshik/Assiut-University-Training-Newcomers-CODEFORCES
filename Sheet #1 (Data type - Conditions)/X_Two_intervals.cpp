/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
 Date:  09/01/26
*/

#include <iostream>
using namespace std;

int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // Find the intersection boundaries
    long long left = max(l1, l2);
    long long right = min(r1, r2);

    if (left <= right)
    {
        cout << left << " " << right << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
