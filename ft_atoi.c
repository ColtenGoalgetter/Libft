/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:38:52 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:40:01 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			op;
	long int	number;
	int			i;

	op = 1;
	number = 0
	i = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			op *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		if (i++ > 18)
			return ((op == -1) - 1);
		number = number * 10 + (*str - 48);
		str++;
	}
	return (op * number);
}
