/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/15727
 *  Q_Number: 15727
 */

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        printf("%d", n / 5);
    }
    else
    {
        printf("%d", n / 5 + 1);
    }
    return 0;
}