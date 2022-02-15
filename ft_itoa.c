/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:41:55 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:41:56 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	convert(int i, int n, char *v)
{
	if (n > 9)
	{
		convert((i - 1), (n / 10), v);
		v[i] = (n % 10) + 48;
	}
	else
		v[i] = n + 48;
}

static long int	get_size(int n)
{
	int					len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*v;
	int		size;

	size = get_size(n);
	v = NULL;
	if (!n)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	v = (char *)malloc(sizeof(char) * size + 1);
	if (!v)
		return (0);
	if (n < 0)
	{
		v[0] = '-';
		n = n * -1;
	}
	convert(size -1, n, v);
	v[size] = '\0';
	return (v);
}
