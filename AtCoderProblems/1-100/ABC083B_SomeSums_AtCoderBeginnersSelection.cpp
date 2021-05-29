#include <bits/stdc++.h>
using namespace std;

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
    int limit = 0, start = 0, end = 0, result = 0;
    cin >> limit >> start >> end;

    for (int i = 1; i <= limit; i++)
    {
        int sum = sumDigitNumber(i);
        if (start <= sum && sum <= end)
        {
            result += i;
        }
    }
    cout << result << endl;
}