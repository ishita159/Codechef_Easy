#include <stdio.h>
main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (360 % n == 0)
            printf("y ");
        else
            printf("n ");
        if (n > 360)
            printf("n ");
        else
            printf("y ");
        if (n > 26)
            printf("n\n");
        else
            printf("y\n");
    }
}