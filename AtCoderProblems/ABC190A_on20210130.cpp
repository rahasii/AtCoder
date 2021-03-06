#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tk = 0, ao = 0, c = 0;
    cin >> tk >> ao >> c;

    //C=0ならば高橋くんが先手、C=1 ならば青木くんが先手
    if (c == 0)
    {
        while (true)
        {
            if (tk == 0)
            {
                cout << "Aoki" << endl;
                return 0;
            }
            tk--;

            if (ao == 0)
            {
                cout << "Takahashi" << endl;
                return 0;
            }
            ao--;
        }
    }
    else
    {
        while (true)
        {
            if (ao == 0)
            {
                cout << "Takahashi" << endl;
                return 0;
            }
            ao--;

            if (tk == 0)
            {
                cout << "Aoki" << endl;
                return 0;
            }
            tk--;
        }
    }
}