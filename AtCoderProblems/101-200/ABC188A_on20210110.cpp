#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
  
    string result = "No";

    if (abs(N - M) < 3)
    {
        result = "Yes";
    }
    
    cout << result << endl;
    return 0;
}