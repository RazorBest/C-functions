#include <stdio.h>

char	*ft_strrev(char *str)
{
	char *first;
	char *last;
	char val;
	
	first = str;
	while(*str)
	{	
		str++;
	}
	last = str - 1;
	
	while(first < last)
	{
		val = *first;
		*first = *last;
		*last = val;
		first++;
		last--;
	} 
}

int	main(void)
{
	char str[100] = "linknil";

	ft_strrev(str);
	printf("%s", str);
}
