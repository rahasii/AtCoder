#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    bool endFlag = true;
    while (endFlag)
    {
        int inputA = 0;
        int inputB = 0;
        cin >> inputA >> inputB;
        if (inputA != 0 && inputB != 0)
        {
            cout << min(inputA, inputB) << " " << max(inputA, inputB) << endl;
        }
        else
        {
            endFlag = false;
        }
    }
    return 0;
}
