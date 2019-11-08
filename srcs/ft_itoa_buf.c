/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_buf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 04:11:13 by agouby            #+#    #+#             */
/*   Updated: 2017/11/21 20:13:07 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_itoa_rec(long nb, char *buf, int i)
{
	static int	size = 0;

	if (nb / 10 && ++size)
		ft_itoa_rec(nb / 10, buf, size);
	buf[size - i] = nb % 10 + 48;
	if (!i)
		size = 0;
}

char	*ft_itoa_buf(char *buf, long nb)
{
	ft_itoa_rec(nb, buf, 0);
	return (buf);
}
