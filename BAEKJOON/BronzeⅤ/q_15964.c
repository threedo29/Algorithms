/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/15964
 *  Q_Number: 15964
 */

#include <stdio.h>

int main(void)
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld", (n * n) - (m * m));
    return 0;
}