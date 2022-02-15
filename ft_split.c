/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:46:25 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:46:26 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(char *s, char c);

static char	**cread_malloc(char **list, char const *s, char c)
{
	list = NULL;
	if (s)
		list = (char **) malloc((get_size((char *)s, c) + 1) * sizeof(char *));
	return (list);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		index;
	int		start;
	int		index_list;

	index = 0;
	index_list = 0;
	list = NULL;
	list = cread_malloc(list, s, c);
	if (!list)
		return (0);
	while (s[index])
	{
		if (s[index] != c)
		{
			start = index;
			while (s[index] && s[index] != c)
				index++;
			list[index_list++] = (char *) ft_substr(s, start, index - start);
		}
		else
			index++;
	}
	list[index_list] = 0;
	return (list);
}

static int	get_size(char *s, char c)
{
	int	index;
	int	size;

	index = 0;
	size = 0;
	while (s[index])
	{
		if (s[index] != c)
			size++;
		while (s[index] && s[index] != c)
			index++;
		index++;
	}
	return (size);
}
