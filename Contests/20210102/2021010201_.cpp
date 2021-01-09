#include <bits/stdc++.h>
using namespace std;

/**
 * @fn
 * 桁ごとの数値を足す
 * @brief 要約説明
 * @param (引数名) 引数の説明
 * @param (引数名) 引数の説明
 * @return 戻り値の説明
 * @sa 参照すべき関数を書けばリンクが貼れる
 */
int sumDigitNumber(int number)
{
    int result = 0;
    int size = std::to_string(number).length();
    for (int i = 0; i < size; i++)
    {
        int tmp = 0;
        tmp = number % 10;
        result += tmp;
        number /= 10;
    }
    return result;
}

int main()
{
    int a, b, result;
    cin >> a >> b;
    a = sumDigitNumber(a);
    b = sumDigitNumber(b);
    if (a >= b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    cout << result;
    return 0;
}
