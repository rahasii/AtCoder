#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int a[10010];
int conpact()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
}

int use_rep()
{
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  //rep ループ
  rep(i, h) cin >> s[i];
  //rep 二重ループ
  rep(i, h) rep(j, w)
  {
    cin >> s[j];
  }
  return 0;
}

int main()
{
  int n = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
  }
}