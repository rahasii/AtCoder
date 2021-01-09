#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers(3);
    string result;
    cin >> numbers.at(0) >> numbers.at(1) >> numbers.at(2);
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++)
    {
        result = result + to_string(numbers.at(i));
        if (i != numbers.size() - 1)
        {
            result += " ";
        }        
    }
    cout << result << endl;
    return 0;
}