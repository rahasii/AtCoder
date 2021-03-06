#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
#define endl "\n"
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); ++i)

//ソート
#define all(x) x.begin(), x.end()
template <typename T>
void sort(vector<T> &v)
{
    sort(all(v));
}
template <typename T>
void rsort(vector<T> &v) { sort(all(v), greater<T>()); }

int main()
{
    // a,bをintで受け取る
    double n = 0;
    cin >> n;
    int result = -1;
    rep(i, n)
    {
        int a = 0, p = 0, x = 0;
        cin >> a >> p >> x;
        if (a < x)
        {
            if (result == -1 || result > p)
                result = p;
        }
    }
    cout << result << endl;
    return 0;
};