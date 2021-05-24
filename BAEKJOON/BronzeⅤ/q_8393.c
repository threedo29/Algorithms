/**
 *  Date: 2021-04-23
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/10950
 *  Q_Number: 10950
 */

#include <stdio.h>

int main(void)
{
    int n, n1, n2, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &n1, &n2);
        printf("%d\n", n1 + n2);
    }

    return 0;
}