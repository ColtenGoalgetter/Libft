/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:47:35 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:47:36 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;

	size_dst = ft_strlen(dst);
	if (dstsize <= size_dst)
		return (dstsize + ft_strlen(src));
	while (*src && (size_dst + 1) < dstsize)
		dst[size_dst++] = *src++;
	dst[size_dst] = 0;
	return (ft_strlen(dst) + ft_strlen(src));
}
