#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<int> column(c + 1);
    vector<vector<int>> row(r + 1, column);

    for (int i = 0; i < r; i++)
    {
        int sum_row = 0;
        for (int j = 0; j < c; j++)
        {
            cin >> row[i][j];
            row[i][c] += row[i][j];
            row[r][j] += row[i][j];
            row[r][c] += row[i][j];
        }
    }

    for (int i = 0; i < r + 1; i++)
    {
        for (int j = 0; j < c + 1; j++)
        {
            if (j == c)
            {
                cout << row[i][j];
            }
            else
            {
                cout << row[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
