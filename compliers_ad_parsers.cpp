#include <stdio.h>
#include <string.h>

char A[10000000];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int i, j, l, c = 0, top = 0;
        scanf("%s", A);
        l = strlen(A);
        for (i = 0; i < l; i++)
        {
            if (A[i] == '<')
            {
                top++;
            }
            else
            {
                top--;
                if (top == 0 && c < i + 1)
                {
                    c = i + 1;
                }
                if (top == -1)
                {
                    break;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}