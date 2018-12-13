include<stdio.h>
main()
{
    int t;
    scanf("%d", &t);
    char alpha[27];
    scanf("%s", alpha);
    while (t--)
    {
        int i = 0, j;
        char a[101];
        scanf("%s", a);
        while (a[i] != 0)
        {
            if (a[i] >= 65 && a[i] <= 90)
            {
                a[i] = alpha[a[i] - 65] - 32;
            }
            else if (a[i] >= 97 && a[i] <= 122)
            {
                a[i] = alpha[a[i] - 97];
            }
            else if (a[i] == '_')
                a[i] = ' ';
            i = i + 1;
        }
        printf("%s\n", a);
    }
}
