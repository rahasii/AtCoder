#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
using namespace std;

/**
 * 解答
 * 10進数→8進数の変換がうまくできなかった 
 */

int hasSeven(int number)
{
    int result = 0;
    int size = std::to_string(number).length();
    if (number > 10000)
    {
        int stop = 0;
    }
    for (int i = 0; i < size; i++)
    {
        int tmp = 0;
        tmp = number % 10;
        if (tmp == 7)
        {
            return true;
        }
        number /= 10;
    }
    return false;
}

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

int main()
{
    int limit;
    cin >> limit;
    int count;

    for (int i = 1; i <= limit; i++)
    {
        int check = i;
        if (hasSeven(check))
        {
            count++;
            continue;
        }

        if (i <= 8)
        {
            continue;
        }

        string oct = to_oct(i);
        sscanf(oct.c_str(), "%d", &check);
        if (hasSeven(check))
        {
            count++;
            continue;
        }
    }

    cout << limit - count << endl;

    return 0;
};

// 10進数と8進数
// 2 3
// 4 4 4
// 4 5 2

// 00
// 01
// 02
// 03
// 04
// 05
// 06
// 07
// 10 
// 11 (9)
// 12 (10)
// 13 11
// 14 12
// 15 13
// 16 14
// 17 15
// 20 16
// 21 17
// 30 24
// 40 32
// 50 40
// 60 
// 70
// 80
// 90 72
// 100 80
// 110 88
// 120
// 130
// 140
// 150 120
// 160
// 170
// 180
// 190
// 200 160
// 210
// 220
// 230
// 240
// 250 200
// 251 201

// 20 160
// 5 40
// 1 1
