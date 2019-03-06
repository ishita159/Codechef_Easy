#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n, m, k, q;

    long long a[(int)1e5];

    long double d1, d2;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];

    cin >> q;

    d1 = n;

    while (q--)
    {

        cin >> d2;

        cout << a[(int)ceil(d1 / (d2 + 1)) - 1] << "\n";
    }
}

int main()
{

    solve();

    return 0;
}
