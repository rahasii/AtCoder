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

    // 余弦定理
    // L = (a * a + b * b) - 2 * a * b * cos(C);
    // 平方根
    // L = sqrt(L);
    // double aCAB = acos((a*a + b*b - a*b) / (2 * a*b));

    // L = (a * a) + (b * b) - (2 * a * b * cos(C));
    // L = sqrt(L);

    // double x = pow(c - a, 2);
    // double y = pow(d - b, 2);
    cout << printf("%.5f", S) << endl;
    // cout << printf("%.5f", L + a + b) << endl;
    return 0;
}
