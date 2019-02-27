#include <iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int a, b, i, p = 1, r, count = 0, c, x;
        scanf("%lld %lld", &a, &b);
        i = 1;
        while (p < a)
        {
            p = p + 2 * i + 1;
            i++;
        }
        a = p;
        //i++;
        //printf("%lld %lld\n",p,i);
        c = 1;
        while (p != 0)
        {
            r = p % 10;
            if (r != 0 && r != 4 && r != 1 && r != 9)
            {
                c = 0;
                break;
            }
            p = p / 10;
        }
        if (c == 1)
            count++;
        //i++;
        while (a < b)
        {
            a = a + 2 * i + 1;
            x = a;
            c = 1;
            while (x != 0)
            {
                r = x % 10;
                if (r != 0 && r != 1 && r != 4 && r != 9)
                {
                    c = 0;
                    break;
                }
                x = x / 10;
            }
            if (c == 1)
                count++;
            i++;
        }
        printf("%lld\n", count);
    }
    return 0;
}