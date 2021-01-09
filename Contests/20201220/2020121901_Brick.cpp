#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit, weight;
    cin >> limit >> weight;

    // bool doContinue = true;
    // int count = 0;
    // while (doContinue)
    // {
    //     if (limit - (weight * count) < weight)
    //     {
    //         doContinue = false;
    //     }
    //     else
    //     {
    //         count++;
    //     }
    // }

    // cout << count << endl;

    //模範解答
    cout << limit / weight;

    return 0;
};