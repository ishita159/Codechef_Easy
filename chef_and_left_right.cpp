#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000000
#define M 1000000007

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.length(), i, p = 1;
        ll a[N];
        ll index = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'l')
            {
                if (i % 2 == 0)
                {
                    p = 2 * p % M;
                }
                else
                {
                    p = 2 * p % M - 1;
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    p = 2 * p % M + 2;
                }
                else
                {
                    p = 2 * p % M + 1;
                }
            }
        }
        cout << p % M << "\n";
    }
    return 0;
}
