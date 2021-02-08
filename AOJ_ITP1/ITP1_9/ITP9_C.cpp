#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n = 0, a = 0, b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str_a, str_b;
        cin >> str_a >> str_b;
        if (str_a > str_b)
        {
            a += 3;
        }
        else if (str_b > str_a)
        {
            b += 3;
        }
        else
        {
            a++;
            b++;
        }
    }
    cout << a << " " << b << endl;
}
