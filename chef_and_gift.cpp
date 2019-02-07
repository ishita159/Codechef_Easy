#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                count++;
            if (count >= k and k != 0)
            {
                flag = 1;
                goto end;
            }
        }
        if (k == 0 and count == n)
            flag = 0;
        else if (k == 0)
            flag = 1;
    end:
        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}