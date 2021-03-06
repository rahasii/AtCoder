#include <bits/stdc++.h>
// #pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    string x;
    cin >> x;
    ll m;
    cin >> m;
    //xが一桁であれば、それがm以下であるかそうでないかのみなるから、0か1
    if (x.size() == 1)
    {
        if (stoi(x) <= m) cout << 1 << endl;
        else cout << 0 << endl;
        return 0;
    }

    int d = 0;
    for (char c : x) d = max(d,int(c-'0'));
    // 二分探索
    ll ac = d, wa = m + 1;
    // (ac + 1 < wa)
    while (wa - ac > 1) //waとacが隣り合うまで
    {
        ll wj = (ac + wa) / 2;
        ll v = 0;
        for (char c : x)
        {
            if (v > m / wj)//計算量を減らすために必要らしいけどよくわからない…
                v = m + 1;
            else
                v = v * wj + (c - '0');
        }
        if (v <= m)
            ac = wj;
        else
            wa = wj;
    }
    cout << ac - d << endl;
    return 0;
}