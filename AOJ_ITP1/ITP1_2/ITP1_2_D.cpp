#include <bits/stdc++.h>
using namespace std;

int main()
{
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    int CT, CB, CL, CR;
    CT = y + r;
    CB = y - r;
    CL = x - r;
    CR = x + r;

    string result;
    if (CT > H || CB < 0 || CL < 0 || CR > W)
    {
        result = "No";
    }
    else
    {
        result = "Yes";
    }

    cout << result << endl;
    return 0;
}
