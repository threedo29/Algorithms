/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/10818
 *  Q_Number: 10818
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b); // 오름차순 비교 함수 구현

int main(void)
{
    int n, i;
    int* p = NULL;

    scanf("%d", &n);
    p = (int*)malloc(sizeof(int) * n);
    if (p != NULL)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", (p + i));
        }

        qsort(p, n, sizeof(int), compare);

        printf("%d %d", *p, *(p + (n - 1)));

        return 0;
    }
}

 // 오름차순 비교 함수 구현
int compare(const void* a, const void* b)
{
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2)
    {
        return -1;
    }

    if (num1 > num2)
    {
        return 1;
    }

    return 0;
}
