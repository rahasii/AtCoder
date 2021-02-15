#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    vector<int> mochi(N,0);

    for (int i = 0; i < N; i++)
    {
        cin >> mochi[i];
    }

    //ソート 降順
    sort(mochi.begin(), mochi.end(), greater<int>());

    int mochi_size = mochi[0];
    int mochi_count = 1;

    for (int i = 0; i < N; i++)
    {
        if(mochi[i] < mochi_size){
            mochi_size = mochi[i];
            mochi_count++;
        }
    }

    cout << mochi_count << endl;
}