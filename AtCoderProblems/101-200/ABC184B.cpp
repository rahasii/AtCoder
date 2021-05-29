#include <bits/stdc++.h>
using namespace std;
//コンパイルの高速化
// #pragma GCC optimize("Ofast")
//endlの高速化
#define endl "\n"
//repマクロ
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
    double a, b, c, d, katamuki, zero;
    cin >> a >> b >> c >> d;
    katamuki = (-d - b) / (c - a);
    cout << printf("%.6f", (-b / katamuki) + a) << endl;
    return 0;
}