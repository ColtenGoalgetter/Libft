/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:51:44 by edos-san          #+#    #+#             */
/*   Updated: 2021/12/06 20:27:03 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*value;
	size_t	index_s;
	size_t	index_value;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	value = (char *) malloc((len + 1) * sizeof(*s));
	index_s = 0;
	index_value = 0;
	if (!value)
		return (NULL);
	while (start < ft_strlen(s) && s[index_s])
	{
		if (index_s >= start && index_value < len)
		{
				value[index_value] = s[index_s];
				index_value++;
		}
			index_s++;
	}
	value[index_value] = '\0';
	return (value);
}
