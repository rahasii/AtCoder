#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    int ai, bi;
    cin >> a >> b;
    ai = a;
    bi = b;
    cout << ai / bi << " " << ai % bi << " " << std::setprecision(5) << fixed <<  a / b << endl;
    return 0;
}