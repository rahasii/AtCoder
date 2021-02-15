#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, answer;
    cin >> s;
    bool finish = false;
    vector<string> words(4);
    words[0] = "dream";
    words[1] = "dreamer";
    words[2] = "erase";
    words[3] = "eraser";

    while (!finish)
    {
        for (int i = 0; i < words.size(); i++)
        {
            string tmp = answer + words[i];
            if (equal(begin(tmp), end(tmp), begin(s)))
            {
                answer += words[i];
                break;
            }
        }
        if (answer == s)
        {
            cout << "YES" << endl;
            return 0;
        }
        if (answer == "" || s.size() < answer.size())
        {
            cout << "NO" << endl;
            return 0;
        }
    }
}
