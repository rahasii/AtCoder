#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B = 0;
    cin >> A >> B;
    string result;

    if (A > B)
    {
        result = "a > b";
    }
    else if (A < B)
    {
        result = "a < b";
    }
    else
    {
        result = "a == b";
    }

    cout << result << endl;
}