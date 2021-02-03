#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<bool> cards(13);
    vector<vector<bool>> set(4);
    set.at(0) = cards;
    set.at(1) = cards;
    set.at(2) = cards;
    set.at(3) = cards;

    int n = 0;
    cin >> n;

    int last = 52 - n;

    for (int i = 0; i < n; i++)
    {
        char mark_s;
        int mark, number;
        cin >> mark_s >> number;
        switch (mark_s)
        {
        case 'S':
            mark = 0;
            break;
        case 'H':
            mark = 1;
            break;
        case 'C':
            mark = 2;
            break;
        case 'D':
            mark = 3;
            break;
        }
        set.at(mark).at(number - 1) = true;
    }

    int count;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (set.at(i).at(j) == false)
            {
                count++;
                char marks;
                switch (i)
                {
                case 0:
                    marks = 'S';
                    break;
                case 1:
                    marks = 'H';
                    break;
                case 2:
                    marks = 'C';
                    break;
                case 3:
                    marks = 'D';
                    break;
                }
                if (count == last)
                {
                    cout << marks << " " << j + 1;
                }
                else
                {
                    cout << marks << " " << j + 1 << endl;
                }
            }
        }
    }

    return 0;
}
