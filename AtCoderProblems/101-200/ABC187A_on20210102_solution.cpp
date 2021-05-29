#include <iostream>
#include <string>
using namespace std;

/**
 * @fn
 * string型の3桁の数字の合計を返す
 * @brief 要約説明
 * @param (引数名) 引数の説明
 * @param (引数名) 引数の説明
 * @return 戻り値の説明
 * @sa 参照すべき関数を書けばリンクが貼れる
 */
int S(string n){
    return (n[0] - '0') + (n[1] - '0') + (n[2] - '0');
}

int main(){
    string A, B;
    cin >> A >> B;
    cout << max(S(A), S(B)) << endl;
}