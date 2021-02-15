#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main()
{
    int N = 0, M = 0, T = 0, in = 0, out = 0;
    cin >> N >> M >> T;
    int btr = N;
    int time = T + 1;
    vector<bool> cafe(time, false);
    for (int i = 0; i < M; i++)
    {
        cin >> in >> out;
        for (int j = in; j < out; j++)
        {
            cafe[j] = out;
        }
    }

    for (int i = 0; i < time; ++i)
    {
        if (btr == 0)
        {
            cout << "No" << "\n";
            return 0;
        }
        if (cafe[i])
        {
            if (btr != N)
            {
                ++btr;
            }
        }
        else
        {
            --btr;
        }
    }

    cout << "Yes" << "\n";
    return 0;
}