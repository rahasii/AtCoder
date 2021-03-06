#include <bits/stdc++.h>
using namespace std;

int main()
{
    double V = 0, T = 0, S = 0, D = 0;
    cin >> V >> T >> S >> D;

    double arrived = D / V;

    if (T <= arrived && arrived <= S)
    {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}