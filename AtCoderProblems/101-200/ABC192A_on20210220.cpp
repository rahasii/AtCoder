#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int x = 0;
    cin >> x;
    cout << 100 - (x % 100) << endl;
    return 0;
}