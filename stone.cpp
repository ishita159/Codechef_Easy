#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll b[n];
    ll c[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll *mx = max_element(a, a + n);
    ll *mn = min_element(a, a + n);
    ll mx1 = *mx;
    ll mn1 = *mn;
    for (ll i = 0; i < n; i++)
    {
        b[i] = mx1 - a[i];
    }
    ll *mx2 = max_element(b, b + n);
    ll mx3 = *mx2;
    for (ll i = 0; i < n; i++)
    {
        c[i] = mx3 - b[i];
    }
    if (k == 0)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else if (k % 2 == 0)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
    }
    else if (k % 2 != 0)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
    }
}