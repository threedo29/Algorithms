/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2914
 *  Q_Number: 2914
 */

#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);
    printf("%.0f", ((double)n * ((double)m - 1.0)) + 1.0);
    return 0;
}
