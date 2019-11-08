/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 18:04:21 by agouby            #+#    #+#             */
/*   Updated: 2017/11/30 03:38:13 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char *str, int c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (str[i + 1] == c || str[i + 1] == '\0')
				word++;
			i++;
		}
		else
			i++;
	}
	return (word);
}
