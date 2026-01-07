/*
Problem Link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
 Date:  06/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};

    // Sort the array
    sort(arr, arr + 3);

    // Print in ascending order
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl; 

    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}