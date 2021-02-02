#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    vector<int> counter(26);

    while (cin >> ch)
    {
        if (isalpha(ch))
        {
            //ASCIIコードへの返還　- 'a'
            int num = tolower(ch) - 'a'; // 文字 ch の番号
            counter[num]++;
        }
    }

    for (int i; i < 26; i++)
    {
        cout << char(i + 'a') << " : " << counter[i] << endl;
    }
    return 0;
}