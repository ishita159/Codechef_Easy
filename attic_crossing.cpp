#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        int i = 0, j = 0, l, num = 0, k = 0;
        char array[1000000];
        scanf("%s", &array);
        
        while (array[i] != '\0')
        {
            if (array[i] == '#')
            {
                if (j > k)
                {
                    num++;
                    
                    k = j;
                }
                j = 0;
            }
            if (array[i] == '.')
            {
                j++;
            }
            
            i++;
            
        }
        printf("%d\n", num);
    }

    return 0;
}