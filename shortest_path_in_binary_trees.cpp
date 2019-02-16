#include <bits/stdc++.h>
using namespace std;

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, ans = 0;
        cin >> i >> j;
        while (i != j)
        {
            if (i > j)
                i /= 2;
            else
                j /= 2;
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}