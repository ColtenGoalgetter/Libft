/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:51:10 by edos-san          #+#    #+#             */
/*   Updated: 2021/12/06 20:17:23 by edos-san         ###   ########.fr       */
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
