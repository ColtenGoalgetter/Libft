/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:51:22 by edos-san          #+#    #+#             */
/*   Updated: 2021/12/04 16:11:12 by edos-san         ###   ########.fr       */
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
