/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/17256
 *  Q_Number: 17256
 */

#include <stdio.h>

int main(void)
{
    int ax, ay, az;
    int cx, cy, cz;
    scanf("%d %d %d %d %d %d", &ax, &ay, &az, &cx, &cy, &cz);

    printf("%d %d %d", cx - az, cy / ay, cz - ax);

    return 0;
}