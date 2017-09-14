#include <stdio.h>

int	atoi(char *str)
{
	int  number;

	number = 0;
	while(*str)
	{
		if(*str != ' ')
		{
			if(*str < '0' || *str > '9')
			{
				break;
			}
			number = number * 10 + *str - '0';
		}
		str++;
	}

	return number;
}
