#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> A(N),B(N); 

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    for (int i = 0; i < N; i++)
    {
        cin >> B.at(i);
    }

    int sum;
    for (int i = 0; i < N; i++)
    {
        sum += A.at(i) * B.at(i);
    }
    
    string result = "No";
    if(sum == 0)
    result = "Yes";

    cout << result << endl;
    return 0;
}