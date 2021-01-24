#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 0, X = 0, alc = 0, count = -1;
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        int a = 0, b = 0;
        cin >> a >> b;

        alc += a * b ;
        if(X * 100 < alc){
            count = i + 1;
            break;
        }
    }
    cout << count << endl;
}