/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atou.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 16:40:29 by agouby            #+#    #+#             */
/*   Updated: 2017/09/27 22:45:06 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_atou(const char *str)
{
	unsigned int	ret;

	if (!str)
		return (0);
	ret = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		ret = (*str - '0') + ret * 10;
		str++;
	}
	return (ret);
}
