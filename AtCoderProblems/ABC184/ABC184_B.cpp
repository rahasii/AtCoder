#include <bits/stdc++.h>
using namespace std;
//コンパイルの高速化
#pragma GCC optimize("Ofast")
//endlの高速化
#define endl "\n"
//repマクロ
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int N, X;
    string s;
    cin >> N >> X;
    cin >> s;
    rep(i, N)
    {
        if (s[i] == 'o')
        {
            ++X;
        }
        else
        {
            if (X > 0) --X;
        }
    }
    cout << X << endl;
    return 0;
}