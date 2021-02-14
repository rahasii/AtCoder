#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, answer, prev;
    cin >> s;

    vector<string> words(4);
    words[0] = "dreamer";
    words[1] = "dream";
    words[2] = "eraser";
    words[3] = "erase";

    reverse(words[0].begin(), words[0].end());
    reverse(words[1].begin(), words[1].end());
    reverse(words[2].begin(), words[2].end());
    reverse(words[3].begin(), words[3].end());
    reverse(s.begin(), s.end());

    while (true)
    {
        prev = answer;
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
        if (answer == prev || s.size() < answer.size())
        {
            cout << "NO" << endl;
            return 0;
        }
    }
}
