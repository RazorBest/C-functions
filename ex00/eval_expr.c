/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prazvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 17:17:38 by prazvan           #+#    #+#             */
/*   Updated: 2017/10/01 14:28:34 by prazvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int		operate(int v1, int v2, char operand)
{
	if (operand == '+')
		return (v1 + v2);
	if (operand == '-')
		return (v1 - v2);
	if (operand == '*')
		return (v1 * v2);
	if (operand == '/')
		return (v1 / v2);
	if (operand == '%')
		return (v1 % v2);
	return (0);
}

int		next_int(char **expr, int result)
{
	while (is_number(**expr))
	{
		result = result * 10 + **expr - '0';
		(*expr)++;
	}
	return (result);
}

int		calculate(char **expr, int order)
{
	int		result;
	char	operand;

	result = 0;
	if (order == 3)
	{
		if (**expr == '(')
		{
			(*expr)++;
			result = calculate(expr, 0);
			(*expr)++;
			return (result);
		}
		return (next_int(expr, result));
	}
	result = calculate(expr, order + 1);
	while ((order == 1 && ft_strchr("+-", **expr)) ||
			(order == 2 && ft_strchr("/%*", **expr)))
	{
		operand = **expr;
		(*expr)++;
		result = operate(result, calculate(expr, order + 1), operand);
	}
	return (result);
}

int		eval_expr(char *expr)
{
	remove_whitespaces(expr);
	return (calculate(&expr, 1));
}
