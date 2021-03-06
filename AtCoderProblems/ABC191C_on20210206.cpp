#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h = 0, w = 0, kado = 0;
    cin >> h >> w;
    vector<string> r(w);
    vector<vector<string>> g(h, r);

    for (int i = 0; i < h; i++)
    {
        string row;
        cin >> row;

        for (int j = 0; j < w; j++)
        {
            g[i][j] = row[j];
        }
    }

    for (int i = 1; i < h - 1; i++)
    {

        for (int j = 1; j < w - 1; j++)
        {
            if (g[i][j] == "#")
            {
                int empty = 0;
                int notEmputy = 0;
                int zyougesayuu = 0;
                for (int tate = -1; tate <= 1; tate++)
                {
                    for (int yoko = -1; yoko <= 1; yoko++)
                    {
                        if (tate == 0 && yoko == 0)
                        {
                            continue;
                        }

                        // int tmp_tate = i + tate;
                        // int tmp_yoko = j + yoko;
                        // string tmp_masu = g[i + tate][j + yoko];

                        if (g[i + tate][j + yoko] == ".")
                        {
                            empty++;
                        }
                        else
                        {
                            notEmputy++;
                            if (tate == 0 || yoko == 0)
                            {
                                if (g[i + tate][j + yoko] == "#")
                                {
                                    zyougesayuu++;
                                }
                            }
                        }
                    }
                }
                if (notEmputy == 1 || notEmputy == 3)
                {
                    kado++;
                }
            }
        }
    }

    cout << kado << endl;
    return 0;
}