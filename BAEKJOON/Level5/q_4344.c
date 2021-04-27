/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/4344
 *  Q_Number: 4344
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c, n, sum = 0, cnt = 0;
    double avg = 0.0;
    int i, j;
    int* p;

    scanf("%d", &c);

    for (i = 0; i < c; i++)
    {
        scanf("%d", &n);
        p = (int*)malloc(sizeof(int) * n);
        sum = 0;
        avg = 0.0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", (p + j));
            sum += (*(p + j));
        }

        avg = (double)sum / (double)n;
        cnt = 0;

        for (j = 0; j < n; j++)
        {
            if (*(p + j) > avg)
            {
                cnt++;
            }
        }

        printf("%.3f%%\n", (double)cnt / (double)n * 100.0);
        free(p);
    }

    return 0;
}
