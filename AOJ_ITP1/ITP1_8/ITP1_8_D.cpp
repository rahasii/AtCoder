#include <bits/stdc++.h>
using namespace std;

int main()
{
    string c, p;
    cin >> c >> p;

    int first = 0, start = 0, end = 0;
    bool find = false;

    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] == p[0])
        {
            first = i;
            find = true;
            break;
        }
    }

    if (!find)
    {
        cout << "No" << endl;
        return 0;
    }

    start = first;
    end = p.length();

    for (int i = 1; i < end; i++)
    {

        bool find = false;
        for (int j = start + 1; j < c.length(); j++)
        {
            if (c[j] == p[i] && !find)
            {
                find = true;
                start = j;
            }

            if (!find)
            {
                for (int k = 0; k < first; k++)
                {
                    if (c[k] == p[i] && !find)
                    {
                        find = true;
                        start = k;
                        end = start;
                    }
                }
            }
        }

        if (!find)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}