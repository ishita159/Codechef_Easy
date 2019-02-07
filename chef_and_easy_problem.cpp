#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long x = 0;
        for (int i = n - 1; i >= 0; i -= 2)
        {
            x += a[i];
        }
        // if(x>y){
        cout << x << endl;
        // }
    }

    return 0;
}