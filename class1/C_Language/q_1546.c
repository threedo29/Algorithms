/**
 *  Date: 2021-01-04
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/1546
 *  Q_Number: 1546
 */

#include <stdio.h>

int main(void)
{
    int n = 0;
    int count = 0;
    int idx = 0;
    int sum = 0;
    int max = 0;

    scanf("%d", &count);

    idx = count;
    while (idx-- != 0)
    {
        if (idx > 0)
        {
            scanf("%d ", &n);
        }
        else
        {
            scanf("%d", &n);
        }
        sum += n;

        if (n > max)
        {
            max = n;
        }
    }

    if (count > 1)
    {
        printf("%.6f", (double)((((double)sum / (double)max) * 100.0) / (double)count));
    }
    else
    {
        printf("%.6f", (double)sum);
    }

    return 0;
}