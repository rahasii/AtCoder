#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    string N = "";
    int K = 0;
    cin >> N >> K;
    string answer = N;
    for (int i; i < K; i++)
    {
        //昇順
        string small = answer;
        sort(small.begin(), small.end());
        //降順
        string big = answer;
        sort(big.begin(), big.end(), greater<int>());
        int big_i = atoi(big.c_str());
        int small_i = atoi(small.c_str());
        int tmp = big_i - small_i;
        answer = to_string(tmp);
        if (answer == "0")
        {
            break;
        }
    }
    cout << answer << endl;
    return 0;
}