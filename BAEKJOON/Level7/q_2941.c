/**
 *  Date: 2021-04-28
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2941
 *  Q_Number: 2941
 */

#include <stdio.h>
#include <string.h>

void check_alphabet(char c);

int cnt = 0;
char arg1 = '\0';
char arg2 = '\0';

int main(void)
{
    char str[15] = { '\0', };
    int i, sum = 0;

    scanf("%s", str);

    for(i = 0; i < strlen(str); i++)
    {
        printf("aaa = %d\n", strlen(str));
    }
    
    return 0;
}

void check_alphabet(char c)
{
    if(arg1 == '\0' && arg2 == '\0') // ÃÖÃÊ
    {
        if(c == 'c' || c == 'd' || c == 'l' || c == 'n' || c == 's' || c == 'z')
        {
            arg1 = c;
        }
        cnt++;
    }
    else if(arg1 != '\0' && arg2 == '\0')
    {
        if(arg1 == 'c')
        {
            if(c == '=' || c == '-')
            {
                arg1 = '\0';
                arg2 = '\0';
            }
            else if(c == arg1)
            {
                cnt++;
                arg1 = c;
                arg2 = '\0';
            }
            else
            {
                cnt++;
                arg1 = '\0';
                arg2 = '\0';
            }
        }
        else if(arg1 == 'd')
        {
            if(c == 'z')
            {
                arg2 = c;
            }
            else if(c == '-')
            {
                arg1 = '\0';
                arg2 = '\0';
            }
            else if(c == arg1)
            {
                cnt++;
                arg1 = c;
                arg2 = '\0';
            }
            else
            {
                cnt++;
                arg1 = '\0';
                arg2 = '\0';
            }
        }
        else if(arg1 == 'n' || arg1 == 'l')
        {
            if(c == 'j')
            {
                arg1 = '\0';
                arg2 = '\0';
            }
            if(c == 'n' || c == 'l')
            {
                cnt++;
                arg1 = c;
                arg2 = '\0';
            }
            else
            {
                cnt++;
                arg1 = '\0';
                arg2 = '\0';
            }
        }
        else if(arg1 == 's' || arg1 == 'z')
        {
            if(c == '=')
            {
                arg1 = '\0';
                arg2 = '\0';
            }
            if(c == arg1)
            {
                cnt++;
                arg1 = c;
                arg2 = '\0';
            }
            else
            {
                cnt++;
                arg1 = '\0';
                arg2 = '\0';
            }
        }
        else {}
    }
    else if(arg1 != '\0' && arg2 != '\0')
    {
        if(arg1 == 'd' && arg2 == 'z')
        {
            if(c == '=')
            {
                arg1 = '\0';
                arg2 = '\0';
            }
            else
            {
                cnt++;
                arg1 = '\0';
                arg2 = '\0';
            }
        }
    }
    else
    {
        arg1 = '\0';
        arg2 = '\0';
    }
}