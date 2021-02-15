#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int price = 0;
    int c10000 = 0, c5000 = 0, c1000 = 0;

    cin >> count >> price;

    for (int i = 0; i <= count; i++)
    {
        for (int j = 0; i + j <= count; j++)
        {
            for (int k = 0; i + j + k <= count; k++)
            {
                if (i + j + k == count)
                {
                    int tmp = i * 10000 + j * 5000 + k * 1000;
                    if (tmp == price)
                    {
                        cout << i << " " << j << " " << k << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}
