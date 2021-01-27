#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, alice = 0, bob = 0;

    cin >> n;
    vector<int> cards(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    //ソート 降順
    sort(cards.begin(), cards.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            alice += cards[i];
        }
        else
        {
            bob += cards[i];
        }
    }

    cout << alice - bob << endl;
}