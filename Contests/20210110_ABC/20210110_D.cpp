#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,prime;
    cin >> N >> prime;

    vector<int> purchase;
    for (int i = 0; i < N; i++)
    {
        int start,end,price;
        cin >> start >> end >> price;
        vector<int> service(end);
        for(int j = start; j<end; j++){
            service.at(j) = price;
        }
        // services.at(i) = service;
    }





    return 0;
}