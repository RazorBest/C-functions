/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 12:33:03 by prazvan           #+#    #+#             */
/*   Updated: 2017/10/01 14:25:42 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		abs(int x)
{
	return (x > 0 ? x : -x);
}

void	ft_reverse(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (str[j + 1])
		j++;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
}

void	ft_putnbr(int x)
{
	char	nbr[20];
	int		len;
	int		sign;

	sign = 1;
	len = 0;
	if (x < 0)
		sign = -1;
	if (x == 0)
		nbr[len++] = '0';
	while (x)
	{
		nbr[len++] = abs(x % 10) + '0';
		x /= 10;
	}
	if (sign < 1)
		nbr[len++] = '-';
	nbr[len] = '\0';
	ft_reverse(nbr);
	ft_putstr(nbr);
}
