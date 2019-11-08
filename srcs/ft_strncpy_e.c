/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_e.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 17:25:01 by agouby            #+#    #+#             */
/*   Updated: 2017/10/18 17:27:15 by agouby           ###   ########.fr       */
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

char		*ft_strncpy_e(char *dest, const char *src, size_t n)
{
	char *new;

	new = dest;
	while (!bmask((char*)src) && n > 7)
	{
		*(((long*)new)) = *(((long*)src));
		new += 8;
		src += 8;
		n -= 8;
	}
	while (*src && n)
	{
		*(new++) = *(src++);
		n--;
	}
	*new = 0;
	return (new);
}
