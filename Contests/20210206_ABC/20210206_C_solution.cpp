#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h = 0, w = 0, kado = 0;
    cin >> h >> w;
    vector<string> r(h);

    for (int i = 0; i < h; i++)
    {
        cin >> r[i];
    }

    for (int i = 0; i < h-1; i++)
    {
        for (int j = 0; j < r[i].size()-1; j++)
        {
            int count = 0;
            for (int tate = 0; tate <= 1; tate++)
            {
                for (int yoko = 0; yoko <= 1; yoko++)
                {
                    if (r[i + tate][j + yoko] == '#')
                    {
                        count++;
                    }
                }
            }
            if(count == 3 || count == 1){
                kado++;
            }
        }
    }

    cout << kado << endl;
    return 0;
}