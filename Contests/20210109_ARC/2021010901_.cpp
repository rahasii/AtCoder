//20210109 Practice

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N,M,zyou,X = 0;
    cin >> N >> M;
    zyou = pow(10, N);
    X = zyou / M;
    cout << X % M << endl;
    return 0;
}
