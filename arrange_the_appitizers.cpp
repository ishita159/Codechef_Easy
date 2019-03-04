#include <bits/stdc++.h>
using namespace std;

long long int upside_down(long long int a, int b)
{
    long long int rev;
    for (int i = 0; i <= b - 1; i++)
    {
        int rem = a % 2;
        a = a / 2;
        rev += rem * pow(2, b - 1 - i);
    }
    return rev;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> k;
        cin >> s;
        long long int n = std::pow(2, k);
        int arr[n];
        memset(arr, 0, sizeof(arr));
        long long int i = 1, j;
        while (s[i] != 0)
        {
            if (arr[i] == 0)
            {
                j = upside_down(i, k);
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                arr[i] = arr[j] = 1;
            }
            i++;
        }
        cout << s << "\n";
    }
    return 0;
}