#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool continueFlag = true;

    while (continueFlag)
    {
        int H, W = 0;
        cin >> H >> W;
        if (H == 0 && W == 0)
        {
            continueFlag = false;
        }
        else
        {
            string line;
            for (int i = 0; i < W; i++)
            {
                line += "#";
            }

            for (int i = 0; i < H; i++)
            {
                cout << line << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
