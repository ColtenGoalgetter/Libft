/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrebelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:44:08 by jrebelo-          #+#    #+#             */
/*   Updated: 2022/02/15 10:44:09 by jrebelo-         ###   ########.fr       */
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
