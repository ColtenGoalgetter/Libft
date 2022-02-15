/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:51:02 by edos-san          #+#    #+#             */
/*   Updated: 2021/12/07 18:50:12 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*value;
	size_t	size;
	size_t	index;

	if (s1 == 0 || s2 == 0)
		return (0);
	index = ft_strlen((char *)s1);
	size = (index + 1 + ft_strlen((char *)s2));
	value = malloc(size * sizeof(char));
	if (!value)
		return (NULL);
	if (!s1 && *s1)
	{
		ft_strlcpy(value, s2, size);
		return (value);
	}
	ft_strlcpy(value, s1, size);
	while (index < size)
	{
		value[index] = *s2;
		s2++;
		index++;
	}
	return (value);
}
