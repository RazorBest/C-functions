/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 13:17:30 by prazvan           #+#    #+#             */
/*   Updated: 2017/10/01 14:11:06 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H

# define FUNCTIONS_H

void	remove_whitespaces(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int x);
char	*ft_strchr(char *str, char c);
char	*ft_strcpy(char *str1, char *str2);
int		eval_expr(char *expr);

#endif
