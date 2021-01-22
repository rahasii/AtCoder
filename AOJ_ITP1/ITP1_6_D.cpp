#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 4棟、3F,10room

    int n, m = 0;
    cin >> n >> m;

    vector<int> a1(m);
    vector<vector<int>> a(n, a1);
    vector<int> b(m);
    vector<int> c(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i] += a[i][j] * b[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}
