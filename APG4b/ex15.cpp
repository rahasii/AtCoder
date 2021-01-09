// 関数を作成することを関数を定義すると言う
// 返り値の型 関数名(引数1の型 引数1の名前, 引数2の型 引数2の名前, ...) {
//   処理
// }返り値の型 関数名(引数1の型 引数1の名前, 引数2の型 引数2の名前, ...) {
//   処理
// }
// 関数の返り値はreturn文を使ってreturn 返り値;で指定する
// 関数の返り値が無い場合は返り値の型にvoidを指定し、return文はreturn;と書く
// 関数の引数が不要な場合は定義と呼び出しで()だけを書く
// 処理がreturn文の行に到達した時点で関数の処理は終了する
// 返り値がある関数で返り値の指定を忘れた場合、どんな値が返ってくるかは決まっていない
// 引数に渡された値は基本的にコピーされる

// #include <bits/stdc++.h>
// using namespace std;

// // 関数定義
// int my_min(int x, int y) {

//   if (x < y) {
//     return x;
//   }
//   else {
//     return y;
//   }

// }

// int main() {
//   int answer = my_min(10, 5);
//   cout << answer << endl; // 5
// }

// 三人兄弟のA君とB君とC君は、お父さんに1つのプレゼントを貰うことになりました。
// 貰えるプレゼントの予算は「テストの合計点の積」で決まります。
// 三人兄弟はそれぞれN個のテストを受けました。
// A君とB君とC君の「i番目のテストの点数」をそれぞれAi,Bi,Ciで表すと、プレゼントの予算は次の式で求まります。
// プレゼントの予算=(A1+A2+⋯+AN)×(B1+B2+⋯+BN)×(C1+C2+⋯+CN)
// 例えば、2個のテスト受けた結果、A君は5点と7点、B君は4点と10点、C君は9点と2点だったとします。
// この場合、(5+7)×(4+10)×(9+2)=12×14×11=1848から、プレゼントの予算は1848円になります。

#include <iostream>
#include <chrono>
#include <bits/stdc++.h>
using namespace std;

// 1人のテストの点数を表す配列から合計点を計算して返す関数
// 引数 scores: scores.at(i)にi番目のテストの点数が入っている
// 返り値: 1人のテストの合計点
int sum(vector<int> scores)
{
    // int size = scores.size();
    // int result = 0;
    // for (size_t i = 0; i < size; ++i)
    // {
    //     result += scores[i];
    // }

    //改良
    int result = 0;
    for (size_t i = 0; i < scores.size(); ++i)
    {
        result += scores.at(i);
    }
    return result;
}

//関数利用版
// sum()の方が早かった 9ms < 11ms
int sum_alt(vector<int> scores)
{
    int result = 0;
    result = accumulate(scores.begin(), scores.end(), 0);
    return result;
}

// 3人の合計点からプレゼントの予算を計算して出力する関数
// 引数 sum_a: A君のテストの合計点
// 引数 sum_b: B君のテストの合計点
// 引数 sum_c: C君のテストの合計点
// 返り値: なし
void output(int sum_a, int sum_b, int sum_c)
{
    cout << sum_a * sum_b * sum_c << endl;
    return;
}

// -------------------
// ここから先は変更しない
// -------------------

// N個の入力を受け取って配列に入れて返す関数
// 引数 N: 入力を受け取る個数
// 返り値: 受け取ったN個の入力の配列
vector<int> input(int N)
{
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }
    return vec;
}

int main()
{
    std::chrono::system_clock::time_point  start, end;
    std::time_t time_stamp;
    start = std::chrono::system_clock::now(); // 計測開始時間

    // 科目の数Nを受け取る
    int N;
    cin >> N;

    // それぞれのテストの点数を受け取る
    vector<int> A = input(N);
    vector<int> B = input(N);
    vector<int> C = input(N);

    // それぞれの合計点を計算
    int sum_A = sum_alt(A);
    int sum_B = sum_alt(B);
    int sum_C = sum_alt(C);

    // プレゼントの予算を出力
    output(sum_A, sum_B, sum_C);

    // =======================
    // 計測したい処理
    // =======================
    end = std::chrono::system_clock::now(); // 計測終了時間

    // 処理に要した時間
    auto time = end - start;

    // 処理を開始した時間（タイムスタンプ）
    time_stamp = std::chrono::system_clock::to_time_t(start);
    std::cout << std::ctime(&time_stamp);

    // 処理に要した時間をミリ秒に変換
    auto msec = std::chrono::duration_cast<std::chrono::milliseconds>(time).count();
    std::cout << msec << " msec" << std::endl;
}
