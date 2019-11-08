/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 23:11:33 by agouby            #+#    #+#             */
/*   Updated: 2019/02/13 16:27:13 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	char coef;
	long nb;

	if (!*str)
		return (0);
	nb = 0;
	coef = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		coef = -1;
	}
	while (ft_isdigit(*str))
	{
		nb = (*str - '0') + nb * 10;
		str++;
	}
	return (nb * coef);
}
