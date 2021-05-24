/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2562
 *  Q_Number: 2562
 */

#include <stdio.h>

int main(void)
{
    int n, i, max, idx = 1;

    scanf("%d", &n);
    max = n;

    for (i = 1; i < 9; i++)
    {
        scanf("%d", &n);
        if (max < n)
        {
            max = n;
            idx = (i + 1);
        }
    }

    printf("%d\n%d", max, idx);

    return 0;
}
