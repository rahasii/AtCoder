#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    string S = "";
    cin >> S;
    for (int i; i < S.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (isupper(S[i]))
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else
        {
            if (islower(S[i]))
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}