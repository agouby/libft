/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 00:03:01 by agouby            #+#    #+#             */
/*   Updated: 2017/10/12 05:13:02 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrev(t_list *lst)
{
	t_list	*new;
	t_list	*elem;

	new = NULL;
	while (lst)
	{
		elem = lst;
		lst = lst->next;
		elem->next = new;
		new = elem;
	}
	return (new);
}
