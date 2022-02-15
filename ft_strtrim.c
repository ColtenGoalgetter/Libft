/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:51:38 by edos-san          #+#    #+#             */
/*   Updated: 2021/12/04 16:16:28 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	get_beginning(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == set[j])
		{
			if (!set[j + 1])
			{
				return (i + j + 1);
			}
			j++;
		}
		i++;
	}
	return (-1);
}

static int	get_end(size_t i, const char *s1, const char *set)
{
	size_t	j;
	size_t	index;

	j = 0;
	index = -1;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == set[j])
		{
			if (!set[j + 1])
			{
				index = i - 2;
				break ;
			}
			j++;
		}
		i++;
	}
	return (index);
}

char	*check(size_t b, size_t e, char const *s1, char const *set)
{
	b = get_beginning(s1, set);
	e = get_end(b, s1, set);
	if (b <= 0)
		return ((char *)s1);
	if (e <= 0)
		e = ft_strlen(s1);
	return (ft_substr(s1, b, e));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
