/**
 *  Date: 2021-04-23
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2739
 *  Q_Number: 2739
 */

#include <stdio.h>

int main(void)
{
    int n, i;

    scanf("%d", &n);
    for (i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}