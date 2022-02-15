/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:42:31 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:42:34 by jrebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	delect(t_list *item, void (*del)(void*))
{
	if (item)
	{
		if (item->next)
			delect(item->next, del);
		ft_lstdelone(item, del);
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst)
		delect(*lst, del);
	*lst = NULL;
}
