#include <stdio.h>
#include <string.h>

int main()
{
    int i, t, l;
    char S[2014];
    scanf("%d\n", &t);
    while (t--)
    {
        gets(S);
        l = strlen(S);
        for (i = l - 1; i >= 0;)
        {
            if (i - 3 >= 0 && (S[i] == '?' || S[i] == 'F') && (S[i - 1] == '?' || S[i - 1] == 'E') && (S[i - 2] == '?' || S[i - 2] == 'H') && (S[i - 3] == '?' || S[i - 3] == 'C'))
            {
                memcpy(S + i - 3, "CHEF", 4);
                i -= 4;
            }

            else
            {
                if (S[i] == '?')
                    S[i] = 'A';
                i--;
            }
        }
        puts(S);
    }
    return 0;
}