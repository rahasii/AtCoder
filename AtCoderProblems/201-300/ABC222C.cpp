#ifdef LOCAL_DBG
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf = 1000000000;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    // 出した手
    vector<string> hands(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        cin >> hands[i];
    }

    // 人毎の勝ち数
    vector<int> players(2 * n, 0);

    // 順位
    vector<int> rank(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        rank[i] = i;
    }

    for (int i = 0; i < m; ++i) {
        // じゃんけん
        for (int j = 1; j < 2 * n; j += 2) {
            char player1 = hands[rank[j - 1]][i];
            char player2 = hands[rank[j]][i];
            if ((player1 == 'G' && player2 == 'C') ||
                (player1 == 'C' && player2 == 'P') ||
                (player1 == 'P' && player2 == 'G'))
                --players[rank[j - 1]];
            if ((player2 == 'G' && player1 == 'C') ||
                (player2 == 'C' && player1 == 'P') ||
                (player2 == 'P' && player1 == 'G'))
                --players[rank[j]];
        }
        // winCount [勝ち数][人、人、人…]
        map<int, vector<int>> winCount;
        for (int i = 0; i < 2 * n; ++i) {
            int wins = players[i];
            winCount[wins].push_back(i);
        }

        int rank_number = 0;
        for (auto count : winCount) {
            for (int i = 0; i < count.second.size(); ++i) {
                rank[rank_number] = count.second.at(i);
                ++rank_number;
            }
        }
    }

    for (const auto& player : rank) cout << player + 1 << endl;
}