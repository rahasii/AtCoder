#include <bits/stdc++.h>
using namespace std;

int main()
{
    //複数の値の中から最小を求める
    int a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    cout << min({a, b, c, d}) << endl;
    return 0;
}