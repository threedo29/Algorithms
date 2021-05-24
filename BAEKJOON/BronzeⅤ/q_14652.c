/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/14652
 *  Q_Number: 14652
 */

#include <stdio.h>

int main(void)
{
    int n, m, k;
    int i, j;
    scanf("%d %d %d", &n,&m,&k);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(--k == 0)
            {
                printf("%d %d", i, j);
            }
        }
    }
    return 0;
}