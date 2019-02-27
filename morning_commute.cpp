#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int x[n], l[n], f[n], sumt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> l[i] >> f[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (sumt <= x[i])
            {
                int t = x[i] - sumt;
                sumt += t + l[i];
            }

            else if (sumt > x[i] && sumt <= f[i])
            {
                int t = f[i] - sumt;
                sumt += t + l[i];
            }
            else if (sumt > x[i] && sumt > f[i])
            {
                while (x[i] < sumt)
                {
                    x[i] += f[i];
                }
                int t = x[i] - sumt;
                sumt += t + l[i];
            }
        }

        cout << sumt << endl;
    }
    return 0;
}
