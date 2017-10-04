/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 14:14:07 by prazvan           #+#    #+#             */
/*   Updated: 2017/09/30 14:16:38 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *str1, char *str2)
{
	while (*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = *str2;
	return (str1);
}