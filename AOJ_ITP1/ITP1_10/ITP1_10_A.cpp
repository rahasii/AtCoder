#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
    double a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    double x = pow(c - a, 2);
    double y = pow(d - b, 2);
    cout << printf("%.5f", pow(x + y, 0.5)) << endl;
}
