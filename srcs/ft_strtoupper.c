/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:33:52 by agouby            #+#    #+#             */
/*   Updated: 2017/10/12 01:52:11 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *str)
{
	size_t len;

	len = ft_strlen(str);
	while (*str)
	{
		if (ft_islower(*str))
			*str -= 32;
		str++;
	}
	return (str - len);
}
