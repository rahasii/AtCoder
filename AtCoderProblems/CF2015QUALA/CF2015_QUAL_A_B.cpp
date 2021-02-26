#include <bits/stdc++.h>
// #pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result * 2;
        int tmp = 0;
        cin >> tmp;
        result += tmp;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     int tmp_i;
    //     cin >> tmp_i;
    //     vector<int> tmp_s = s;
    //     s.push_back(tmp_i);
            //配列の連結
    //     s.insert(s.end(), tmp_s.begin(), tmp_s.end());
    // }
    // int half = (s.size() - 1) / 2;
    // ll result = 0;
    // for (int i = 0; i < half; i++)
    //     result += s[i] * 2;
    // result += s[half];
    cout << result << endl;
    return 0;
}