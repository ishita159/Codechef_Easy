#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int flag = 0;

        for (int i = 1; i < n; i++)
        {
            if (__gcd(arr[0], arr[i]) == 1)
            {
                flag = 1;
                i = n;
            }
        }
        if (n == 1)
            cout << "-1\n";
        else if (flag == 1)
            cout << n << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}