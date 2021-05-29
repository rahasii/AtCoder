#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    int minimum;
    vector<int> numbers(rows * columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            int index = i * columns + j;
            cin >> numbers.at(index);
            if (i + j == 0)
            {
                minimum = numbers.at(index);
            }
            else if (numbers.at(index) < minimum)
            {
                minimum = numbers.at(index);
            }
        }
    }

    int diff = 0;
    for (int x : numbers)
    {
        diff += x - minimum;
    }

    cout << diff << endl;

    return 0;
};