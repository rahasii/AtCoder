#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
#define endl "\n"
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); ++i)

//ソート
#define all(x) x.begin(), x.end()
template<typename T> void sort(vector<T> &v) { sort(all(v)); }
template<typename T> void rsort(vector<T> &v) { sort(all(v), greater<T>()); }

int main()
{
    // a,bをintで受け取る
    double a=0,b=0;
    cin >> a >> b;
    a = a * 100;
    b = b * 100;
    double rate = b / a  * 100;
    cout << printf("%.10f", 100-rate)  << endl;
    return 0;
};