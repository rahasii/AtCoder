#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, result;
    char op;
    bool doContinue = true;

    while (doContinue)
    {
        cin >> a >> op >> b;
        switch (op)
        {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case '?':
            doContinue = false;
            break;
        }
    }

    return 0;
}