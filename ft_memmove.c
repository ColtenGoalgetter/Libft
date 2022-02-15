/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:45:00 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:45:02 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	index = 0;
	if (!dst && !src)
		return (NULL);
	if ((unsigned char *) dst > (unsigned char *) src)
	{
		while (len--)
		{
			*((unsigned char *)dst + len) = *((unsigned char *)src + len);
			index++;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
