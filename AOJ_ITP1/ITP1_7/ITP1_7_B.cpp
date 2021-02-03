#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool end = false;
    while (!end)
    {

        int n, x, count = 0;
        cin >> n >> x;

        if (n == 0 && x == 0)
        {
            end = true;
            continue;
        }

        for (int a = 1; a <= n; a++)
        {
            for (int b = a + 1; b <= n; b++)
            {
                for (int c = b + 1; c <= n; c++)
                {
                    if (a + b + c == x)
                    {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
