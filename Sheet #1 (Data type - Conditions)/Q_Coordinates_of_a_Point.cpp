/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
 Date:  06/01/26
*/

#include <iostream>
using namespace std;

int main()
{
    double X, Y;
    cin >> X >> Y;

    if (X == 0 && Y == 0)
        cout << "Origem";
    else if (Y == 0)
        cout << "Eixo X";
    else if (X == 0)
        cout << "Eixo Y";
    else if (X > 0 && Y > 0)
        cout << "Q1";
    else if (X < 0 && Y > 0)
        cout << "Q2";
    else if (X < 0 && Y < 0)
        cout << "Q3";
    else
        cout << "Q4";

    return 0;
}
