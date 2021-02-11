#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        double total = 0;
        double average = 0;
        vector<double> scores(n, 0);
        for (int t = 0; t < n; t++)
        {
            cin >> scores[t];
            total += scores[t];
        }
        average = total / n;
        double hensa = 0;
        for (int t = 0; t < n; t++)
        {
            double score = 0;
            hensa += pow((scores[t] - average), 2);
        }
        cout << printf("%.6f", pow(hensa / n, 0.5)) << endl;
    }
    return 0;
}