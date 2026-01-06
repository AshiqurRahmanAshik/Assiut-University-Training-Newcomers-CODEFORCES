/*
Problem Link:https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
 Date:  06/01/26
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int years = n / 365;
    int remaining_days = n % 365;
    int months = remaining_days / 30;
    int days = remaining_days % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
