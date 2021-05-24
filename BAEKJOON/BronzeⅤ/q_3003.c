/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/3003
 *  Q_Number: 3003
 */

#include <stdio.h>

int gPeace[6] = {1, 1, 2, 2, 2, 8};

int main(void)
{
    int n, i;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &n);
        printf("%d ", gPeace[i] - n);
    }
    return 0;
}
