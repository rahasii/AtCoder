#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    //pair型知らなかった
    vector<pair<int, int>> A(N);
    for (auto &[x, y] : A)
        cin >> x >> y;
    int ans = 0;
    for (int i = 0; i < N; i++)
        //int j = i + 1 とすることで重複する組み合わせの処理を避けられる
        for (int j = i + 1; j < N; j++)
        {
            //傾きの求め方
            //(y2 - y1) / (x2 - x1)

            //abs(x1 - x2))がabs(y1 - y2)以上なら、
            //傾きが-1 ~ 1に納まることを利用している、すごい。
            auto [x1, y1] = A[i];
            auto [x2, y2] = A[j];
            if (abs(y1 - y2) <= abs(x1 - x2))
                ans++;
        }
    cout << ans << endl;
}