/**
 *  Date: 2021-04-23
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/8393
 *  Q_Number: 8393
 */

#include <stdio.h>

int main(void)
{
    int n, sum;

    scanf("%d", &n);
    sum = (n + (n + 1)) / 2;

    printf("%d", sum);

    return 0;
}