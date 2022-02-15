/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:51:15 by edos-san          #+#    #+#             */
/*   Updated: 2021/12/04 16:08:24 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	char			*v;
	unsigned int	index;

	index = 0;
	if (!s || !f)
		return (0);
	size = (unsigned int)ft_strlen(s);
		v = malloc(size + 1 * sizeof(char));
	if (!v)
		return (0);
	while (s[index])
	{
		v[index] = (*f)(index, s[index]);
		index++;
	}
	v[index] = 0;
	return (v);
}
