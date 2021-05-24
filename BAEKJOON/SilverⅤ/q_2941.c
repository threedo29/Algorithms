/**
 *  Date: 2021-04-29
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2941
 *  Q_Number: 2941
 */

#include <stdio.h>
#include <string.h>

void check_alphabet(char c);

int g_cnt = 0;
char g_arg1 = '\0';
char g_arg2 = '\0';

int main(void)
{
    char str[101] = { '\0', };
    int cnt;
    int i;

    scanf("%s", str);

    cnt = strlen(str);

    for (i = 0; i < cnt; i++)
    {
        check_alphabet(str[i]);
    }

    printf("%d", g_cnt);

    return 0;
}

void check_alphabet(char c)
{
    if (g_arg1 == '\0' && g_arg2 == '\0') // ����
    {
        if (c == 'c' || c == 'd' || c == 'l' || c == 'n' || c == 's' || c == 'z')
        {
            g_arg1 = c;
            g_arg2 = '\0';
        }
        g_cnt++;
    }
    else if (g_arg1 != '\0' && g_arg2 == '\0')
    {
        switch (g_arg1)
        {
        case 'c':
            if (c == '=' || c == '-')
            {
                g_arg1 = '\0';
            }
            else if (c == 'c' || c == 'd' || c == 'l' || c == 'n' || c == 's' || c == 'z')
            {
                g_cnt++;
                g_arg1 = c;
            }
            else
            {
                g_cnt++;
                g_arg1 = '\0';
                g_arg2 = '\0';
            }
            break;
        case 'd':
            if (c == '-')
            {
                g_arg1 = '\0';
            }
            else if (c == 'z')
            {
                g_cnt++;
                g_arg2 = c;
            }
            else if (c == 'c' || c == 'd' || c == 'l' || c == 'n' || c == 's')
            {
                g_cnt++;
                g_arg1 = c;
            }
            else
            {
                g_cnt++;
                g_arg1 = '\0';
                g_arg2 = '\0';
            }
            break;
        case 'l':
        case 'n':
            if (c == 'j')
            {
                g_arg1 = '\0';
            }
            else if (c == 'c' || c == 'd' || c == 'l' || c == 'n' || c == 's' || c == 'z')
            {
                g_cnt++;
                g_arg1 = c;
            }
            else
            {
                g_cnt++;
                g_arg1 = '\0';
                g_arg2 = '\0';
            }
            break;
        case 's':
        case 'z':
            if (c == '=')
            {
                g_arg1 = '\0';
            }
            else if (c == 'c' || c == 'd' || c == 'l' || c == 'n' || c == 's' || c == 'z')
            {
                g_cnt++;
                g_arg1 = c;
            }
            else
            {
                g_cnt++;
                g_arg1 = '\0';
                g_arg2 = '\0';
            }
            break;
        default:
            break;
        }
    }
    else if (g_arg1 != '\0' && g_arg2 != '\0')
    {
        if (g_arg1 == 'd' && g_arg2 == 'z')
        {
            if (c == '=')
            {
                g_cnt--;
                g_arg1 = '\0';
                g_arg2 = '\0';
            }
            else if (c == 'c' || c == 'd' || c == 'l' || c == 'n' || c == 's' || c == 'z')
            {
                g_cnt++;
                g_arg1 = c;
                g_arg2 = '\0';
            }
            else
            {
                g_cnt++;
                g_arg1 = '\0';
                g_arg2 = '\0';
            }
        }
    }
    else {}
}