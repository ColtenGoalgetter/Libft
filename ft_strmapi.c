/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:48:17 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:48:18 by jrebelo-         ###   ########.fr       */
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
