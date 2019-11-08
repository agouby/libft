/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:02:46 by agouby            #+#    #+#             */
/*   Updated: 2017/12/01 01:17:27 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;

	if (!s1)
		return (NULL);
	return ((s = (char *)malloc(ft_strlen(s1) + 1)) ? ft_strcpy(s, s1) : NULL);
}

char	*ft_strndup(const char *s1, size_t len)
{
	char	*s;

	if (!s1)
		return (NULL);
	if (!(s = (char *)malloc(len + 1)) || !len)
		return (NULL);
	return (ft_strncpy(s, s1, len));
}
