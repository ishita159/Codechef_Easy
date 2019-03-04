#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    char x[100000];
    cin >> t;
    while (t--)
    {
        int s = 0;
        cin >> x;
        for (i = 1; i < strlen(x); i++)
        {
            if (x[i] == '-' && x[i - 1] == '-')
            {
                s++;
                x[i] = '+';
            }
            else if (x[i] == '+' && x[i - 1] == '+')
            {
                s++;
                x[i] = '-';
            }
        }
        if (s < strlen(x) - s)
            cout << s << "\n";
        else
            cout << strlen(x) - s << "\n";
    }
    return 0;
}