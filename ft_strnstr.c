/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:48:42 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:48:43 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ishave(const char *haystack, const char *needle,
size_t i_hay, size_t len)
{
	size_t	i;

	i = 0;
	while (needle[i] == haystack[i_hay] && i_hay < len)
	{
		if (needle[i + 1] == '\0')
		{
			return (1);
		}
		i++;
		i_hay++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (ishave(haystack, needle, i, len))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
