#include <iostream>
using namespace std;

int main()
{
    short i, j, k, tc;
    int p, q, r;
    int x, y, z;

    cin >> tc;
    while (tc--)
    {
        cin >> p >> q >> r;

        x = 0;
        z = 0;
        for (i = 0; i < p; i++)
        {
            (q % 2) == 0 ? x++ : z++;
            q = q >> 1;
        }

        for (i = 0; i < p; i++)
        {
            (r % 2) == 0 ? x++ : z++;
            r = r >> 1;
        }

        x = min(p, min(x, z));

        q = 0;
        for (i = 0; i < x; i++)
            q += (0x0001 << (p - 1 - i));
        cout << q << endl;
    }
    return 0;
}