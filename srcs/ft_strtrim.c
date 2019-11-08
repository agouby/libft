/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:17:57 by agouby            #+#    #+#             */
/*   Updated: 2017/11/30 08:27:54 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	start = 0;
	while (ft_isspace(s[start]))
		start++;
	while (end && ft_isspace(s[end]))
		end--;
	return (ft_strndup(s + start, end - start + 1));
}
