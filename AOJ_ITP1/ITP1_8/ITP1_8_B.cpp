#include <bits/stdc++.h>
using namespace std;

/**
 * @fn
 * 桁ごとの数を足す
 */
int S(string n)
{
    int sum = 0;
    for (int i = 0; i < n.length(); i++)
    {
        int tmp = n[i] - '0';
        sum += tmp;
    }
    return sum;
}

int main()
{
    bool end = false;
    while (!end)
    {
        string n;
        cin >> n;
        if (n == "0")
        {
            end = true;
        }
        else
        {
            cout << S(n) << endl;
        }
    }
    return 0;
}
