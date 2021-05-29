#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 0;
    string X = "";
    cin >> N >> X;
    string result = "";

    for (int i = 0; i < N; i++)
    {
        string t;
        cin >> t;
        if (t == X)
        {
            continue;
        }
        if (result != "")
        {
            result += " ";
        }
        result += t;
    }

    cout << result << endl;
    return 0;
}