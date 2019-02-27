#include <stdio.h>
#include <malloc.h>

typedef struct node_s
{
    int idx;
    struct node_s *nxt;
} Node;

Node *a[10];
//Node pool[100001];
//int pcnt = 0;
int v[100001];

Node *getnode(int idx)
{
    Node *temp = (Node *)malloc(sizeof(Node)); // &pool[pcnt++];
    temp->nxt = NULL;
    temp->idx = idx;

    return temp;
}

typedef struct point_s
{
    int idx;
    int mov;
} Que;

Que q[100001];
char s[100001];

int min_moves(int eidx)
{
    int moves;
    int idx, tid;
    int f = -1;
    int r = -1;
    Node *temp;
    //Node *temp1;

    r++;
    q[r].idx = 0;
    q[r].mov = 0;
    v[0] = 1;

    while (f != r)
    {
        f++;
        idx = q[f].idx;
        moves = q[f].mov;

        if (idx == eidx)
        {
            return moves;
        }

        temp = a[s[idx] - '0'];

        while (temp)
        {
            if (!v[temp->idx])
            {
                tid = temp->idx;
                v[tid] = 1;
                r++;
                q[r].idx = tid;
                q[r].mov = moves + 1;
            }
            temp = temp->nxt;
        }
        a[s[idx] - '0'] = NULL;

        if (idx - 1 >= 0 && !v[idx - 1])
        {
            v[idx - 1] = 1;
            r++;
            q[r].idx = idx - 1;
            q[r].mov = moves + 1;
        }

        if (idx + 1 <= eidx && !v[idx + 1])
        {
            v[idx + 1] = 1;
            r++;
            q[r].idx = idx + 1;
            q[r].mov = moves + 1;
        }
    }

    return -1;
}

int main()
{

    int i = 0, len = 0;
    Node *temp;
    int ret = 0;

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //pcnt = 0;
    scanf("%s", s);

    while (s[i] != '\0')
    {

        temp = getnode(i);
        temp->nxt = a[s[i] - '0'];
        a[s[i] - '0'] = temp;

        i++;
    }

    len = i;

    ret = min_moves(len - 1);
    printf("%d", ret);
    return 0;
}