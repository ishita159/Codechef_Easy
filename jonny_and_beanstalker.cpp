#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int stem = 1;
        int flag = 0;
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            int leaves = arr[i];
            if (leaves > stem)
                flag = -1;
            else
            {
                stem = stem - leaves;
                stem = stem * 2;
            }

            if ((i < n - 1 and stem == 0) or flag == -1)
            {
                p = 1;
                goto end;
            }
            if (i == n - 1 and stem != 0)
            {
                p = 1;
                goto end;
            }
        }
    end:
        if (p == 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}

