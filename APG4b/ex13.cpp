#include <bits/stdc++.h>
using namespace std;
#include <cstdlib> 

int main() {
  int N;
  int average;
  cin >> N;
  vector<int> vec(N);
  
  for(int i = 0; i < N; i++){
    int score;
    cin >> score;
    vec.at(i) = score;
    average+=score;
  }
  
  average /= N;
    
  for(int i = 0; i < N; i++){
    cout << abs(average - vec.at(i)) << endl;
  }
  
}
