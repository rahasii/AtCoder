#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;

int main()
{
    int A, B, f;
    cin >> A >> B;
    f = (2 * A) + 100;
    if (f > B)
    {
        f = f - B;
    }
    else
    {
        f = 0;
    }
    cout << f << "\n";
    return 0;
}