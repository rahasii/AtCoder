// ループ構文の中にさらにループ構文があるものを多重ループと呼ぶ
// 多重ループを一度に抜けたい場合は、フラグ変数を用意してそれぞれのループを抜けるようにする必要がある

// 多重ループを抜けるときは、ループを抜けるかどうかを持つ変数(フラグ変数)を用意して、フラグ変数の値に応じてループを抜けるように書きます。

// for (int i = 0; i < ...; i++)
// {
//     for (int j = 0; j < ...; j++)
//     {

//         /* 処理 */

//         if (/* 2重ループを抜ける条件 */)
//         {
//             finished = true;
//             break; // (＊)
//                    // finishをtrueにしてからbreakすることで、
//                    //   内側のループを抜けたすぐ後に外側のループも抜けることができる
//         }
//     }
//     // (＊)のbreakでここに来る

//     if (finished)
//     {
//         break; // (＊＊)
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, target;
    int count;
    cin >> number >> target;
    vector<int> A(number), P(number);
    for (int i = 0; i < number; i++)
    {
        cin >> A.at(i);
    }
    for (int i = 0; i < number; i++)
    {
        cin >> P.at(i);
    }

    // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
    for (int apple : A)
    {
        for (int pain : P)
        {
            if (target == apple + pain)
            {
                count++;
            }
        }
    }

    cout << count << endl;
}
