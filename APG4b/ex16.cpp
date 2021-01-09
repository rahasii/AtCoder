
// 範囲for文
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   vector<int> a = {1, 3, 2, 5};
//   for (int x : a) {
//     cout << x << endl;
//   }
// }

// for文は1.11で見たように「N回処理する」というようなパターンをwhile文より短く書くための構文でした。
// 今回紹介した範囲for文は配列に対する処理をfor文よりも簡潔に書くための構文でした。 よって、以下のように使い分けると良いでしょう。
// 配列の全ての要素に対する処理を行なう場合 → 範囲for文
// それ以外で一定回数繰り返し処理する場合 → for文
// それ以外の場合 → while文

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int target;
//     cin >> target;
//     for (int i = 0; i < 4; i++)
//     {
//         int tmp;
//         cin >> tmp;
//         if (tmp == target)
//         {
//             cout << "YES" << endl;
//             return 0;
//         }
//         target = tmp;
//     }
//     cout << "NO" << endl;
//     return 0;
// }

// int main()
// {
//     vector<int> data(5);
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> data.at(i);
//     }

//     for (int i : data)
//     {
//         if (data.at(i) == data.at(i + 1))
//         {
//             cout << "YES" << endl;
//         }
//     }

//     cout << "NO" << endl;
//     // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
//     // ここにプログラムを追記
// }

int main()
{
    int target;
    cin >> target;
    for (int i = 0; i < 4; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == target)
        {
            cout << "YES" << endl;
            return 0;
        }
        target = tmp;
    }
    cout << "NO" << endl;
    return 0;
}