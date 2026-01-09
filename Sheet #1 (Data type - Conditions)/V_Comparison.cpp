/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
 Date:  09/01/26
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    // Check the condition based on the symbol
    if ((s == '<' && a < b) ||
        (s == '>' && a > b) ||
        (s == '=' && a == b))
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }

    return 0;
}
