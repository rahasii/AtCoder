#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, MAX = 0;
    cin >> N;
    vector<int> oranges(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> oranges[i];
    }

    vector<int> xlist = oranges;
    std::sort(xlist.begin(), xlist.end());
    xlist.erase(std::unique(xlist.begin(), xlist.end()), xlist.end());

    vector<vector<int>> result;

    for (int x : xlist)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                //bool burst = false;
                int ate = 0;
                for (int k = i; k < j; k++)
                {
                    if (oranges[k] < x)
                    {
                        break;
                    }
                    ate += x;
                }

                MAX = max(ate, MAX);
            }
        }
    }

    cout << MAX << endl;
}