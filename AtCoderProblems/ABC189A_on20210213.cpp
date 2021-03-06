#include <bits/stdc++.h>
using namespace std;

string slot(string n)
{
    if (n[0] == n[1] && n[1] == n[2])
    {
        return "Won";
    }
    return "Lost";
}

int main()
{
    string A;
    cin >> A;
    cout << slot(A) << endl;
}