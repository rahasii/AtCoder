#include <stdio.h>
#include <utility>
#include <vector>
#include <numeric>

int ri()
{
    int n;
    scanf("%d", &n);
    return n;
}

int main()
{
    int n = ri();

    // 1 << n == 2のn乗と同じ結果になるらしい
    // http://www.thinkridge.com/modules/tinyd1/content/index.php?id=9
    // 通説ですが、"２のべき乗での乗除算は、シフト演算（ビットシフト）で処理したほうが早い"というのがあります。
    // CPUが高速化されたといっても、乗除算命令はそれなりに遅い処理で、比較するまでもなくシフト演算のほうが高速です。
    std::vector<int> a(1 << n);
    for (auto &i : a)
        i = ri();

    std::vector<int> remaining(1 << n);
    // https://codezine.jp/article/detail/8778
    // まずはとっても簡単なiota、2つのイテレータで示されたコンテナ内の各要素を連番で埋めてくれます。
    std::iota(remaining.begin(), remaining.end(), 0);

    for (int i = 1; i <= n; i++)
    {
        std::vector<int> next_remaining;
        //1 << nより1回分累乗が少ない
        //nが2ならj < 1 << (n - i) は2
        for (int j = 0; j < 1 << (n - i); j++)
        {
            //a[0]とa[1],a[2]とa[3]と比較して大きいほうのindexをnext_remainingにセット
            if (a[remaining[j * 2]] > a[remaining[j * 2 + 1]])
                next_remaining.push_back(remaining[j * 2]);
            else
                next_remaining.push_back(remaining[j * 2 + 1]);
        }
        if (i == n)
        {
            //i == nとなるとき決勝となる
            //next_remaining[0] 決勝で勝ったほう
            //remaining[0][1] 準決勝 
            //next_remaining[0]じゃないほうが準優勝
            printf("%d\n", 1 + (remaining[0] == next_remaining[0] ? remaining[1] : remaining[0]));
            return 0;
        }
        remaining = next_remaining;
    }

    return 0;
}
