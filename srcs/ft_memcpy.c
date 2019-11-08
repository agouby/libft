/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:35:11 by agouby            #+#    #+#             */
/*   Updated: 2017/10/16 19:19:05 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n)
	{
		if (n > 7)
		{
			n -= 8;
			*((long*)(dst + n)) = *((long*)(src + n));
		}
		if (n > 3)
		{
			n -= 4;
			*((int*)(dst + n)) = *((int*)(src + n));
		}
		if (n)
		{
			n--;
			*((char*)(dst + n)) = *((char*)(src + n));
		}
	}
	return (dst);
}
