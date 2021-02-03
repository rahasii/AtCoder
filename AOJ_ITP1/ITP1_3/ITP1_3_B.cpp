#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    bool endFlag = true;
    while (endFlag)
    {
        //上手くいかない
        // int inputA = 0;
        // int inputB = 0;
        // cin >> inputA >> inputB;
        // if (inputA != 0 && inputB != 0)
        // {
        //     // cout << to_string(min(inputA,inputB)) << " " << to_string(max(inputA,inputB)) << endl;
        //     // cout << min(inputA,inputB) << ' ' << max(inputA,inputB) << endl;

        // if (inputA > inputB) swap(inputA, inputB);
        // cout << inputA << ' ' << inputB << endl;
        // }else{
        //     endFlag = false;
        // }

        //上手くいく
        int inputA = 0;
        int inputB = 0;
        cin >> inputA >> inputB;
        if (inputA == 0 && inputB == 0)
        {
            endFlag = false;
        }
        else
        {
            // cout << to_string(min(inputA,inputB)) << " " << to_string(max(inputA,inputB)) << endl;
            // cout << min(inputA,inputB) << ' ' << max(inputA,inputB) << endl;
            if (inputA > inputB)
                swap(inputA, inputB);
            cout << inputA << ' ' << inputB << endl;
        }
    }
    return 0;
}
