/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_whitespaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 14:06:29 by prazvan           #+#    #+#             */
/*   Updated: 2017/10/01 14:16:13 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	remove_whitespaces(char *str)
{
	while (*str)
	{
		while (ft_strchr(" \n\t", *str))
			ft_strcpy(str, str + 1);
		str++;
	}
}
