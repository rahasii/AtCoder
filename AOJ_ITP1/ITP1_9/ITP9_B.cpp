#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string card;

    while (cin >> s)
    {
        if (s == "-")
        {
            break;
        }

        card = s;

        int times;
        cin >> times;
        for (int t = 0; t < times; t++)
        {
            int shuffle = 0;
            cin >> shuffle;
            string copy = card.substr(shuffle);
            for (int i = 0; i < shuffle; i++)
            {
                copy.push_back(card[i]);
            }
            card = copy;
        }
        cout << card << endl;
    }

    return 0;
}
