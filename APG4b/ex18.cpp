// 2次元配列は2次元の表を扱うときに便利
// vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))で宣言できる
// 初期値は省略可能
// 変数名.at(i).at(j)でi行目j列目へアクセスできる
// 変数名.size()で縦の大きさを取得できる
// 変数名.at(0).size()で横の大きさを取得できる
// 要素を指定して初期化する例
// Copy
// vector<vector<int>> data = {
//   {7, 4, 0, 8},
//   {2, 0, 3, 5},
//   {6, 1, 7, 0},
// };vector<vector<int>> data = {
//   {7, 4, 0, 8},
//   {2, 0, 3, 5},
//   {6, 1, 7, 0},
// };
// 2次元以上の配列を多次元配列という
// vectorをN個入れ子にしたものをN次元配列という

// 問題文
// あるゲーム大会にはN人が参加しM試合が行われました。各参加者には
// 1からNの番号が割り当てられています。
// 試合に関する情報が与えられるので、M回の試合がすべて終了した時点での試合結果の表を作成し、出力してください。
// ただし、同じ参加者のペアについて2回以上試合が行われることはないとします。

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int playersNumber, gameNumber;
    cin >> playersNumber >> gameNumber;
    vector<int> winners(gameNumber), losers(gameNumber);
    vector<vector<string>> resultTable(playersNumber, vector<string>(playersNumber, "-"));

    for (int i = 0; i < gameNumber; i++)
    {
        int winner = -1;
        int loser = -1;
        cin >> winner >> loser;
        winner--;
        loser--;
        resultTable.at(winner).at(loser) = "o";
        resultTable.at(loser).at(winner) = "x";

    }

    for (int i = 0; i < playersNumber; i++)
    {
        for (int j = 0; j < playersNumber; j++)
        {
            cout << resultTable.at(i).at(j);
            if (j < playersNumber - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
};
