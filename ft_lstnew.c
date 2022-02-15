/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:43:55 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:43:56 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*v;

	v = (t_list *)malloc(sizeof(t_list));
	if (!v)
		return (0);
	v->content = content;
	return (v);
}
