#include <bits/stdc++.h>
// #pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

/**
 * n進法変換
 */
// int n_sinho(int x, int m)
// {
//     string s;
//     while (x)
//     {
//         s = to_string(x % m) + s;
//         x /= m;
//     }
//     return atoi(s.c_str());
// }
long long n_sinho(string s, long long m)
{
    long long result;
    int length = s.length();
    for (int i = 0; i < length; i++)
    {
        long long keta = s[i] - '0' ;
        long long totyuu = keta * pow(m, length-i-1);
        result += totyuu;
    }
    return result;
}

int main()
{
    long long Xi = 0;
    long long M = 0;
    string X = to_string(Xi);
    cin >> X >> M;
    sort(X.begin(), X.end(), greater<int>());
    int max = X[0] - '0';

    int count = 0;

    for (int i = max + 1; i < M; i++)
    {
        long long ns = n_sinho(X, i);
        if (M >= ns)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}