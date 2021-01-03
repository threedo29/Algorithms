/**
 *  Date: 2021-01-03
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/1008
 *  Q_Number: 1008
 */

#include <stdio.h>

int main(void)
{
    int n1 = 0, n2 = 0;
    double result = 0.0;

    scanf("%d %d", &n1, &n2);
    result = (double)n1/(double)n2;
    printf("%.9f", result);

    return 0;
}