#include <iostream>

sing namespace std;

int main()
{
    long long q;
    cin >> q;
    while (q--)
    {
        long long n, k;
        cin >> n >> k;
        long long ar[n];
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            ar[i] = k / x;
        }
        long long mx = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            mx = max(mx, x * ar[i]);
        }

        cout << mx << endl;
    }

    return 0;
}