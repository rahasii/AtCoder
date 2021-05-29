#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define endl "\n"
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    rep(i, n) cin >> numbers[i];
    sort(numbers.begin(), numbers.end());
    int max_gcd = 0;
    int result = 0;
    for (int i = 2; i <= numbers[n-1]; i++)
    {
        int tmp_gcd = 0;
        for (int j = 0; j < n; j++)
        {
            if (numbers[j] % i == 0)
            {
                tmp_gcd++;
            }
        }
        if (max_gcd < tmp_gcd)
        {
            max_gcd = tmp_gcd;
            result = i;
        }
    }
    cout << result << "\n";
    return 0;
}