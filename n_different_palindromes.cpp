#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, t = 97;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cout << char(t);
            t++;
            if (t > 122)
                t = 97;
        }
        cout << endl;
    }
    return 0;
}
