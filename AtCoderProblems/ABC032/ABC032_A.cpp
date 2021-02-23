#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); ++i)

int main()
{
    int a = 0, b = 0, n = 0;
    cin >> a >> b >> n;

    int i = n;
    while(true){
        if (i % a == 0 && i % b == 0)
        {
            cout << i << endl;
            return 0;
        }
        i++;
    }
}