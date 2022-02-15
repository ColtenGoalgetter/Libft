/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:49:03 by edos-san          #+#    #+#             */
/*   Updated: 2021/12/04 15:22:25 by edos-san         ###   ########.fr       */
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
