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
            for (int i = 0; i < H; i++)
            {
                string line;
                for (int j = 0; j < W; j++)
                {
                    if (i != 0 && i != H-1 && j != 0 && j != W-1)
                    {
                        line += ".";
                    }else{
                        line += "#";
                    }
                }
                cout << line << endl;
            }
            cout << endl;
        }
    }
    return 0;
}
