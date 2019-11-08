/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jump_lines.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 15:18:30 by agouby            #+#    #+#             */
/*   Updated: 2018/03/18 07:05:17 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_jump_lines(int fd, char *line, size_t n)
{
	size_t i;

	i = 0;
	while (i++ < n)
	{
		get_next_line(fd, &line);
		ft_strdel(&line);
	}
}
