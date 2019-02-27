#include <stdio.h>

// your code goes here
struct node
{
    int s, f, j;
};
int comparator(void *n1, void *n2)
{
    struct node node1 = *(struct node *)n1, node2 = *(struct node *)n2;
    if (node1.j < node2.j)
        return -1;
    else if (node1.j > node2.j)
        return 1;
    else
    {
        if (node1.f <= node2.f)
            return -1;
        else if (node1.f > node2.f)
            return 1;
    }
}
int main()
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        struct node a[n];
        int i;
        struct node *cha;
        for (i = 0; i < n; i++)
            scanf("%d%d%d", &a[i].s, &a[i].f, &a[i].j);
        if (n == 0)
            printf("0\n");
        else
        {
            qsort(a, n, sizeof(struct node), comparator);
            long long int sum = 1;
            cha = &a[0];
            for (i = 1; i < n; i++)
            {
                if (a[i].j != cha->j)
                {
                    sum++;
                    cha = &a[i];
                }
                else
                {
                    if (a[i].s >= cha->f)
                    {
                        sum++;
                        cha = &a[i];
                    }
                }
            }
            printf("%lld\n", sum);
        }
    }
    return 0;
}