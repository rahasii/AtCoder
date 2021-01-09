#include <bits/stdc++.h>
using namespace std;

/**
 * @fn
 * 関数の説明
 * @brief 要約説明
 * @param (引数名) 引数の説明
 * @param (引数名) 引数の説明
 * @return 戻り値の説明
 * @sa 参照すべき関数を書けばリンクが貼れる
 */

/**
 * @fn
 * vectorでcinを受け取る
 * @brief 要約説明
 * @param (引数名) 引数の説明
 * @param (引数名) 引数の説明
 * @return 戻り値の説明
 * @sa 参照すべき関数を書けばリンクが貼れる
 */
void accept(vector<int> &A)
{
  for (int i = 0; i < A.size(); i++)
  {
    cin >> A.at(i);
  }
}

/**
 * @fn
 * a ~ bの総和を計算する (a ≦ b)という前提
 * @brief 要約説明
 * @param (引数名) 引数の説明
 * @param (引数名) 引数の説明
 * @return 戻り値の説明
 * @sa 参照すべき関数を書けばリンクが貼れる
 */
int sum_range(int a, int b)
{
  // ベースケース
  if (a == b)
  {
    return a;
  }
  // 再帰ステップ
  return sum_range(a, b - 1) + b; //「a~bの総和」=「a~(b-1)の総和」+ b
}

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

/**
 * @fn
 * ある数字を含む桁があるか調べる
 * @brief 要約説明
 * @param (引数名) 引数の説明
 * @param (引数名) 引数の説明
 * @return 戻り値の説明
 * @sa 参照すべき関数を書けばリンクが貼れる
 */
int hasSeven(int number, int target)
{
  int result = 0;
  int size = std::to_string(number).length();
  for (int i = 0; i < size; i++)
  {
    int tmp = 0;
    tmp = number % 10;
    if (tmp == target)
    {
      return true;
    }
    number /= 10;
  }
  return false;
}

/**
 * 10進数→8進数
 */
string to_oct(int n)
{
  string s;
  while (n)
  {
    s = to_string(n % 8) + s;
    n /= 8;
  }
  return s;
}

/**
 * 縦*横の表分の入力を1次元のvectorに受け取る
 */
vector<int> convert2dTo1d(int rows, int columns)
{
  int minimum;
  vector<int> numbers(rows * columns);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      int index = i * columns + j;
      cin >> numbers.at(index);
    }
  }

  return numbers;
};

int main()
{
  return 0;
}