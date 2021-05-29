//20210109 Practice

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    vector<string> patterns = {""};

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        string A, B;
        cin >> A >> B;

        for (string pattern : patterns)
        {
            if (pattern.find(A) == std::string::npos)
            {
                patterns.push_back(pattern+A);  
                // count++;
            }

            if (pattern.find(B) == std::string::npos)
            {
                // patterns.at(count) = pattern.append(B);  
                patterns.push_back(pattern+B);  
                // count++; 
            }
        }
    }

    cout << "saidai" << endl;
    return 0;
}
