/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/17496
 *  Q_Number: 17496
 */

#include <stdio.h>

int main(void)
{
    int n, t, c, p;
    int i;
    int sum = 0;
    scanf("%d %d %d %d", &n, &t, &c, &p);

    for (i = t + 1; i <= n; i += t)
    {
        sum += (c * p);
    }
    printf("%d", sum);
    return 0;
}