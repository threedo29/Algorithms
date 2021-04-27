/**
 *  Date: 2021-04-23
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2884
 *  Q_Number: 2884
 */

#include <stdio.h>

int main(void)
{
    int h, m;
    scanf("%d %d", &h, &m);

    if (m - 45 >= 0)
    {
        printf("%d %d", h, m - 45);
    }
    else
    {
        if (h > 0)
        {
            printf("%d %d", h - 1, 60 + (m - 45));
        }
        else
        {
            printf("23 %d", 60 + (m - 45));
        }
    }

    return 0;
}