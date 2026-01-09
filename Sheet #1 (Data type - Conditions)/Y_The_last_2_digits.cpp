/*
Problem Link:
 Date:  09/01/26
*/

#include <iostream>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long result = A * B * C * D;
    result = result % 100;

    cout << result << endl;

    return 0;
}
