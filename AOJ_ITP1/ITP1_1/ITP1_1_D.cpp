#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;
    
    int hour = num / 3600;
    int minits = (num % 3600) / 60;
    int seconds = num % 3600 % 60;

    cout << hour << ':' << minits << ':' << seconds << endl;
}