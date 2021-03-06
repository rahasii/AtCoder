#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); ++i)
using ll = long long;

int main()
{
    // 12時間で一周
    // 360 / (60 * 12) =  0.5度 / 分
    // 1時間で一周
    // 6度 / 分
    
    int a = 0, b = 0, h = 0, m = 0;
    cin >> a >> b >> h >> m;

    int min = (h * 60) + m;
    //double型の余りは%使えないためfmod
    double angle_a = fmod((min * 0.5), 360);
    double angle_b = fmod((min * 6), 360);
    if (angle_a == 0)
        angle_a = 360;
    if (angle_b == 0)
        angle_b = 360;

    //絶対値
    double angle = 0;
    angle = abs(angle_a - angle_b);
    // 余弦定理
    // L = (a * a) + (b * b) - 2 * a * b * cos((M_PI / 180) * C);
    // C++のcos関数の引数には、ラジアンを単位とする角度を与えます。
    // X度をラジアンに変換する式は、π * (X/180)　ですから、45度のcosineを計算する式は、cos(π * 45 / 180)となります。
    // M_PI:π
    double c2 = (a * a) + (b * b) - 2 * a * b * cos(M_PI * angle / 180);
    double result = sqrt(c2);
    cout << printf("%.10f", result)  << endl;
    return 0;
}