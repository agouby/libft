/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 01:43:33 by agouby            #+#    #+#             */
/*   Updated: 2017/10/14 00:34:03 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char	*new;

	new = dest;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (new);
}
