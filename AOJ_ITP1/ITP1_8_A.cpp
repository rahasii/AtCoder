#include <bits/stdc++.h>
using namespace std;

string toggle(string s)
{
    for (int i; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
            else
            {
                s[i] = toupper(s[i]);
            }
        }
    }
    return s;
}

int main()
{
    std::string s;
    getline(cin, s);
    cout << toggle(s) << endl;
}