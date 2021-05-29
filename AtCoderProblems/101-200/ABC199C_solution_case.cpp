#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
#include <vector>

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < ll(n); i++)

void swap(string& s, ll a_index, ll b_index) {
    a_index--;
    b_index--;
    auto t = s[a_index];
    s[a_index] = s[b_index];
    s[b_index] = t;
}

string center_swap(string s, ll n) {
    auto pre = s.substr(0, n);
    auto post = s.substr(n);
    return post + pre;
}

int main() {
    ll n, q;
    string s, hold;
    cin >> n >> s >> q;
    vector<ll> t(q);
    vector<ll> a(q);
    vector<ll> b(q);
    string rs = center_swap(s, n);
    bool swapped = false;

    rep(i, q) {
        cin >> t[i] >> a[i] >> b[i];
        if (t[i] == 1) {
            if (swapped) {
                a[i] = a[i] <= n ? a[i] + n : a[i] - n;
                b[i] = b[i] <= n ? b[i] + n : b[i] - n;
            }
            swap(s, a[i], b[i]);
        } else {
            swapped = !swapped;
        }
    }
    if (swapped) s = center_swap(s, n);
    cout << s << endl;
}