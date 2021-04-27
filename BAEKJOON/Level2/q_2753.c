/**
 *  Date: 2021-04-23
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2753
 *  Q_Number: 2753
 */
#include <stdio.h>

int main(void)
{
    unsigned int year;
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}