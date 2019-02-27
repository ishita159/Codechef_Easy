#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void feed(int a, int b, int n)
{
    for (int i = 1; i < n; ++i)
    {
        cout << 2 << endl;
        cout << i << " " << a << " " << b << endl;
        cout << i + 1 << " " << a << " " << b << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        cout << n << endl;
        for (int j = 1; j <= n; j++)
        {
            cout << n << endl;
            int first = 1;
            int k = j;
            while (first <= n)
            {
                int a = ((k) % (n) ? (k) % (n) : n);
                int b = ((k + 1) % (n) ? (k + 1) % (n) : n);
                cout << first << " " << a << " " << b << endl;
                first++;
                k++;
            }
        }
    }
}