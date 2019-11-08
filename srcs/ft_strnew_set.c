/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 20:21:31 by agouby            #+#    #+#             */
/*   Updated: 2017/10/17 21:36:14 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew_set(size_t size, char set)
{
	char *new;

	new = ft_strnew(size);
	!(set & 0xFF) ? ft_bzero(new, size) : ft_memset((char *)new, set, size);
	new[size] = '\0';
	return (new);
}
