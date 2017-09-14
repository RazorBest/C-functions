#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
 
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}
