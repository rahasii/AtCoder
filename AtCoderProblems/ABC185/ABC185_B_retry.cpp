//最初20201213_B.cppでLTEになってしまった
//結局で#pragma GCC optimize("Ofast")対応できた
//こちらは処理自体を見直そうとしたもの（途中）

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int N = 0, M = 0, T = 0, in = 0, out = 0;
    cin >> N >> M >> T;
    int btr = N;
    int time = T + 1;
    vector<int> cafe(time, 0);
    for (int i = 0; i < M; i++)
    {
        cin >> in >> out;
        for (int j = in; j <= out; j++)
        {
            cafe[j] = out;
        }
    }

    for (int i = 0; i < time; ++i)
    {
        if (btr == 0)
        {
            cout << "No"
                 << endl;
            return 0;
        }
        if (cafe[i] != 0)
        {
            int plus = cafe[i] - i + 1;
            if (N - btr > plus){
                btr += plus;
            }else{
                btr = N;
            }
            i = cafe[i];
        }
        else
        {
            --btr;
        }
    }

    cout << "Yes"
         << endl;
    return 0;
}