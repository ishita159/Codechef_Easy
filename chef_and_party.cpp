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

        int A[n], i;
        for (i = 0; i < n; i++)
            cin >> A[i];

        sort(A, A + n);

        int count = 0;

        for (i = 0; i < n; i++)
        {
            if (A[i] <= count)
                count++;
            else
                break;
        }

        cout << i << "\n";
    }
}