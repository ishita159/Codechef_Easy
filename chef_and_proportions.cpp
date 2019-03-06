#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a * b == c * d || a * d == b * c || a * c == b * d)
    {
        cout << "Possible\n";
    }
    else
    {
        cout << "Impossible\n";
    }
    return 0;
}