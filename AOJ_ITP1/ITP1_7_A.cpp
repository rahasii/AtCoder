#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool end = false;
    while (!end)
    {
        int m, f, r = 0;
        cin >> m >> f >> r;

        if (m == -1 && f == -1 && r == -1)
        {
            end = true;
            continue;
        }

        if (m == -1 || f == -1)
        {
            cout << "F" << endl;
            continue;
        }

        int score = m + f;

        if (80 <= score)
        {
            cout << "A" << endl;
            continue;
        }
        else if (65 <= score)
        {
            cout << "B" << endl;
            continue;
        }
        else if (50 <= score || 30 <= score && 50 <= r)
        {
            cout << "C" << endl;
            continue;
        }
        else if (30 <= score)
        {
            cout << "D" << endl;
            continue;
        }
        else
        {
            cout << "F" << endl;
            continue;
        }
    }
    return 0;
}
