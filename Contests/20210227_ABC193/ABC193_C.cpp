#include <bits/stdc++.h>
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
#define endl "\n"
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep2(i, s, n) for (ll i = (s); i < (int)(n); ++i)

//ソート
#define all(x) x.begin(), x.end()
template <typename T>
void sort(vector<T> &v)
{
  sort(all(v));
}
template <typename T>
void rsort(vector<T> &v) { sort(all(v), greater<T>()); }

//配列の中にある値が存在するか
int vector_finder(std::vector<int> vec, int number)
{
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance(vec.begin(), itr);
  if (index != vec.size())
  { // 発見できたとき
    return 1;
  }
  else
  { // 発見できなかったとき
    return 0;
  }
}

int x()
{
  ll N = 0;
  cin >> N;
  // double R = sqrt(N);
  // double R = sqrt(N) + 1;
  // int count = 0;
  vector<int> list;

  rep2(a, 2, N)
  {
    if (N < pow(a, 2))
    {
      continue;
    }
    rep2(b, 2, N)
    {
      ll tmp = pow(a, b);
      if (N < tmp)
      {
        break;
      }
      if (tmp <= N && vector_finder(list, tmp) == 0)
      {
        list.push_back(tmp);
        // ++count;
      }
    }
  }
  // int result = N - count;
  int result = N - list.size();
  cout << result << endl;
  return 0;
};

#include <iostream>
#include <unordered_set>
using namespace std;
using ll = int64_t;

int main(){
    ll N;
    cin >> N;
    //被りなしのコンテナ
    unordered_set<ll> s;
    for(ll a = 2; a * a <= N; a++){
        ll x = a * a;
        while(x <= N){
            s.insert(x);
            x *= a;
        }
    }
    cout << N - s.size() << endl;
}
