/**
 *  Date: 2021-01-03
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/1152
 *  Q_Number: 1152
 */

#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 1000001

int main(void)
{
    char arr[MAX_STR_SIZE] = {'\0',};
    int i = 0;
    int count = 0;

    fgets(arr, MAX_STR_SIZE, stdin);

    for (i = 0; i < MAX_STR_SIZE; i++)
    {
        if (i != 0 && arr[i] == '\0')
        {
            break;
        }
        if (arr[i] == ' ')
        {
            count += 1;
        }
    }

    if (arr[0] == ' ')
    {
        count -= 1;
    }

    if (arr[strlen(arr) - 2] == ' ')
    {
        count -= 1;
    }

    printf("%d", count + 1);

    return 0;
}