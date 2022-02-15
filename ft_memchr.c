/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:44:22 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:44:23 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*t;
	size_t			i;
	unsigned char	v;

	v = c;
	i = 0;
	t = ((unsigned char *)str);
	while (i < n)
	{
		if (t[i] == v)
			return (&t[i]);
		i++;
	}
	return (0);
}
