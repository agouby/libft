/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:31:26 by agouby            #+#    #+#             */
/*   Updated: 2017/12/01 06:42:15 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *s)
{
	char	*addr;
	size_t	i;

	if (!s)
		return (0);
	addr = (char *)s;
	i = 0;
	while (1)
	{
		if (!(*addr & 0xFF))
			return (i);
		if (!(*(int *)addr & 0xFF00))
			return (i + 1);
		if (!(*(int *)addr & 0xFF0000))
			return (i + 2);
		if (!(*(int *)addr & 0xFF000000))
			return (i + 3);
		addr += 4;
		i += 4;
	}
}
