#include <bits/stdc++.h>
using namespace std;

/*
文字列 小文字に変換する
*/
std::string toLower(std::string s)
{
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    return s;
}

int main()
{
    string W, T;
    cin >> W;
    int count = 0;
    while (cin >> T)
    {
        if (T == "END_OF_TEXT")
        {
            break;
        }
        if (toLower(T) == W)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}