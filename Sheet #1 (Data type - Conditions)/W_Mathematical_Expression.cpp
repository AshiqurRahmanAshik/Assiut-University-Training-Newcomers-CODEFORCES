/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
 Date:  09/01/26
*/

#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    char S, Q; 

    cin >> A >> S >> B >> Q >> C;

    int result;

    // Calculate based on the operator
    if (S == '+')
    {
        result = A + B;
    }
    else if (S == '-')
    {
        result = A - B;
    }
    else if (S == '*')
    {
        result = A * B;
    }

    // Compare with given C
    if (result == C)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << result << endl;
    }

    return 0;
}
