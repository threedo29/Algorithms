/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/15596
 *  Q_Number: 15596
 */

#include <stdio.h>

int main(void)
{
    int n, i;
    int max = 0, temp;
    int sum = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        sum += temp;
        if (max < temp)
        {
            max = temp;
        }
    }

    printf("%f", ((double)sum / (double)max * 100.0) / (double)n);

    return 0;
}
