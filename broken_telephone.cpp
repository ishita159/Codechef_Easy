#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long int l;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    l t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll c = 0;
        int j = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                j = i;
                c += 2;
                break;
            }
        }
        if (j != -1)
        {
            for (int i = j + 1; i < n; i++)
            {
                if (a[i] != a[i - 1] && (i - 1) != j)
                {
                    c += 2;
                    j = i;
                }
                else if (a[i] != a[i - 1] && (i - 1) == j)
                {
                    c += 1;
                    j = i;
                }
            }
        }

        cout << c << endl;
    }
    return 0;
}