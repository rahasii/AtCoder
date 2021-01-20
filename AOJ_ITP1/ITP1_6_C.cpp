#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 4棟、3F,10room
    vector<int> room(10);
    vector<vector<int>> floor(3, room);
    vector<vector<vector<int>>> bill(4, floor);

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        bill[b - 1][f - 1][r - 1] += v;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int l = 0; l < 10; l++)
            {
                cout << " " << bill[i][j][l];
            }
            cout << endl;
        }
        if (i != 3)
        {
            cout << "####################" << endl;
        }
    }

    return 0;
}
