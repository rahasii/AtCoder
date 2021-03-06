#include <bits/stdc++.h>
using namespace std;

vector<int> battle(vector<int> A)
{
    if (A.size() == 2)
    {
        return A;
    }
    vector<int> winners;
    for (int i = 0; i < A.size(); i += 2)
    {
        winners.push_back(max(A.at(i), A.at(i + 1)));
    }
    return battle(winners);
}

//https://qiita.com/wonder_zone/items/51fb5c3a773b98aa130c
int vector_finder(std::vector<int> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return index;
  }
  else { // 発見できなかったとき
    return 0;
  }
}

int main()
{
    int N,second;
    cin >> N;
    vector<int> tornament(pow(2,N)),final;
    for (int i = 0; i < pow(2,N); i++)
    {
        cin >> tornament.at(i);
    }
    final = battle(tornament);
    second = min(final.at(0), final.at(1));
    second = vector_finder(tornament, second);
    cout << second+1 << endl;
    return 0;
}