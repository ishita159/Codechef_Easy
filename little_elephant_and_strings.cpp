#include <bits/stdc++.h>
using namespace std;

bool check(string B, string A)
{
    int la, lb;
    lb = B.length();
    la = A.length();
    for (int i = 0; i < lb - la + 1; i++)
    {
        int count = 0;
        for (int j = 0; j < la; j++)
        {
            if (B[i + j] == A[j])
                count++;
        }
        if (count == la)
            return true;
    }

    return false;
}

int main()
{
    // your code goes here
    int k, n;
    cin >> k >> n;
    string A[k], B[n];
    for (int i = 0; i < k; i++)
        cin >> A[i];
    for (int j = 0; j < n; j++)
        cin >> B[j];

    for (int j = 0; j < n; j++)
    {
        int t = 0;
        if (B[j].length() < 47)
        {
            for (int i = 0; i < k; i++)
            {
                if (check(B[j], A[i]) == 1)
                {
                    t = 1;
                    cout << "Good" << endl;
                    break;
                }
            }
            if (t == 0)
                cout << "Bad" << endl;
        }
        else
            cout << "Good" << endl;
    }
    return 0;
}