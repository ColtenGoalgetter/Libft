/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:50:19 by edos-san          #+#    #+#             */
/*   Updated: 2021/12/05 16:05:42 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	next_list(t_list *lst, int index)
{
	if (lst)
		return (next_list(lst->next, index + 1));
	return (index);
}

int	ft_lstsize(t_list *lst)
{
	return (next_list(lst, 0));
}
