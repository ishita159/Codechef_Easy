#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, d, ds, dt;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int sum = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                continue;
            else
                sum = sum + s[i] - '0';
        }
        cout << sum << "\n";
    }
    return 0;
}