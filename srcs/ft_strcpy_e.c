/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_e.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 00:12:59 by agouby            #+#    #+#             */
/*   Updated: 2017/10/18 17:25:20 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bmask(char *str)
{
	return (!(*(long*)str & 0xFF)
			|| !(*(long*)str & 0xFF00)
			|| !(*(long*)str & 0xFF0000)
			|| !(*(long*)str & 0xFF000000)
			|| !(*(long*)str & 0xFF00000000)
			|| !(*(long*)str & 0xFF0000000000)
			|| !(*(long*)str & 0xFF000000000000)
			|| !(*(long*)str & 0xFF00000000000000));
}

char		*ft_strcpy_e(char *dest, const char *src)
{
	char *new;

	new = dest;
	while (!bmask((char*)src))
	{
		*(((long*)new)) = *(((long*)src));
		new += 8;
		src += 8;
	}
	while (*src)
		*(new++) = *(src++);
	*new = 0;
	return (new);
}
