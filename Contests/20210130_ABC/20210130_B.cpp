#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int s = 0;
    int d = 0;
    cin >> n >> s >> d;

    // この魔物は強いので、詠唱にS秒以上かかる呪文や、威力がD以下の呪文ではダメージを与えられません。

    for (int i = 0; i < n; i++)
    {
        int X = 0, Y = 0;
        cin >> X >> Y;
        if (X < s && d < Y)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}