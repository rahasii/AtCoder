#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, MIN, MAX, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long tmp;
        cin >> tmp;
        if (i == 0)
        {
            MIN = tmp;
            MAX = tmp;
        }
        else
        {
            MIN = min(tmp, MIN);
            MAX = max(tmp, MAX);
        }
        sum += tmp;
    }

    cout << MIN << " " << MAX << " " << sum << endl;
    return 0;
}
