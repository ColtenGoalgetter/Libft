/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:47:21 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:47:22 by jrebelo-         ###   ########.fr       */
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
