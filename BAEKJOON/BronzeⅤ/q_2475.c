/**
 *  Date: 2021-05-10
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2475
 *  Q_Number: 2475
 */

#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        sum += (n * n);
    }

    printf("%d", sum % 10);

    return 0;
}
