/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2588
 *  Q_Number: 2588
 */
#include <stdio.h>

int main(void)
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("%d\n", n1 * ((n2 % 100) % 10));
    printf("%d\n", n1 * ((n2 % 100) / 10));
    printf("%d\n", n1 * (n2 / 100));
    printf("%d", n1 * n2);

    return 0;
}