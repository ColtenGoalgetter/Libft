/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:50:22 by edos-san          #+#    #+#             */
/*   Updated: 2021/12/04 15:34:15 by edos-san         ###   ########.fr       */
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
