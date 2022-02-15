/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:46:53 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:46:54 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*value;
	size_t	i;

	size = 0;
	while (s1[size])
		size++;
	value = malloc(size + 1 * sizeof(char));
	i = 0;
	if (!value)
		return (0);
	while (s1[i])
	{
		value[i] = s1[i];
		i++;
	}
	value[i] = 0;
	return (value);
}
