#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long int l;

int main()
{

    l t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n], s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        s = s / (n - 1);
        //cout<<s<<endl;
        for (int i = 0; i < n; i++)
            cout << s - a[i] << " ";
        cout << endl;
    }
    return 0;
}