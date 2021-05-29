#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); ++i)

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    if (0 < a)
    {
        cout << "Positive" << endl;
    }
    else if (a <= 0 && 0 <= b)
    {
        cout << "Zero" << endl;
    }
    else if ((b - a) % 2 == 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Positive" << endl;
    }
    return 0;
}