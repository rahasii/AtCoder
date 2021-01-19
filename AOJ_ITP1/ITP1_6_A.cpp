#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers.at(i);
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << numbers.at(n - i -1);
        }
        else
        {
            cout << " " << numbers.at(n - i -1);
        }
    }
    cout << endl;
    return 0;
}
