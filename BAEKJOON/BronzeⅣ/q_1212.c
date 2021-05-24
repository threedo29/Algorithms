/**
 *  Date: 2021-05-21
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/1212
 *  Q_Number: 1212
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char input[333336] = { '\0', };

int main(void)
{
	char* table[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	int i;
	bool flag = false;
	int size;

	scanf("%s", input);
	size = strlen(input);

	if (size == 1 && ((int)input[0] - 48) == 0)
	{
		printf("0");
	}
	else
	{
		for (i = 0; !flag && i < size; i++)
		{
			switch ((int)input[i] - 48)
			{
			case 0:
				break;
			case 1:
				printf("1");
				flag = !flag;
				break;
			case 2:
				printf("10");
				flag = !flag;
				break;
			case 3:
				printf("11");
				flag = !flag;
				break;
			default:
				printf("%s", table[(int)input[i] - 48]);
				flag = !flag;
				break;
			}
		}

		for (; i < size; i++)
		{
			printf("%s", table[(int)input[i] - 48]);
		}
	}

	return 0;
}