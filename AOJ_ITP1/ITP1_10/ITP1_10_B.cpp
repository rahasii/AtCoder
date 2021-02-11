#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
    double a = 0, b = 0, C = 0, S = 0, L = 0, h = 0;
    cin >> a >> b >> C;
    // 面積
    S = (a * b * sin((M_PI / 180) * C)) / 2.0;
    cout << printf("%.5f", S) << endl;
    // 余弦定理
    L = (a * a) + (b * b) - 2 * a * b * cos((M_PI / 180) * C);
    L = sqrt(L);
    cout << printf("%.5f", L + a + b) << endl;
    // 高さ = 2 * 面積 / 底辺
    cout << printf("%.5f", 2 * S / a) << endl;
    return 0;
}
