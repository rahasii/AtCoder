#include <bits/stdc++.h>
using namespace std;

double katamuki(int x1, int x2, int y1, int y2)
{
    double katamuki_result = 0;
    double x_result = x2 - x1;
    double y_result = y2 - y1;
    if (x2 == x1)
    {
        return -999;
    }
    katamuki_result = y_result / x_result;
    return katamuki_result;
}

int main()
{
    int N;
    int average;
    cin >> N;
    vector<vector<int>> patterns(N, vector<int>(2));
    vector<vector<int>> patterns2(N, vector<int>(2));

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        patterns.at(i).at(0) = x;
        patterns.at(i).at(1) = y;

        patterns2.at(i).at(0) = x;
        patterns2.at(i).at(1) = y;
    }

    int count = 0;
    vector<string> searched;

    for (int i = 0; i < patterns.size(); i++)
    {
        for (int j = 0; j < patterns.size(); j++)
        {
            double result = 0;
            if (i == j)
            {
                continue;
            }
            else
            {
                bool calFlg = true;
                for (string pattarn : searched)
                {
                    if (pattarn == to_string(i) + "," + to_string(j) || pattarn == to_string(j) + "," + to_string(i))
                    {
                        calFlg = false;
                    }
                }

                if (!calFlg)
                {
                    continue;
                }

                string checked = to_string(i) + "," + to_string(j);
                searched.push_back(checked);

                result = katamuki(
                    patterns.at(i).at(0),
                    patterns2.at(j).at(0),
                    patterns.at(i).at(1),
                    patterns2.at(j).at(1));

                if (result <= 1 && -1 <= result)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
