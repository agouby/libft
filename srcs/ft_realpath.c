/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realpath.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:09:53 by agouby            #+#    #+#             */
/*   Updated: 2019/11/08 17:18:49 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	init_path(char **path, char **pos, char *dest)
{
	*dest = '/';
	(*path)++;
	*pos = dest + 1;
	**pos = 0;
}

static void	move_path(char *path, char **pos, char *dest)
{
	if (!*path || (path[0] == '.'
		&& (!path[1] || (path[1] == '.' && !path[2]))))
	{
		(*pos)--;
		if (*pos != dest && path[0] && path[1])
			while (**pos != '/')
				(*pos)--;
	}
	else
	{
		strcpy(*pos, path);
		*pos = strchr(dest, 0);
	}
}

int			ft_realpath(char *path, char *dest)
{
	char	*slash;
	char	*pos;

	init_path(&path, &pos, dest);
	if (!path[0])
		return (0);
	while (1)
	{
		if ((slash = strchr(path, '/')))
			*slash = 0;
		move_path(path, &pos, dest);
		if (slash)
		{
			*pos++ = '/';
			path = slash + 1;
		}
		*pos = 0;
		if (!slash)
			break ;
	}
	if (!*dest)
		strcpy(dest, "/");
	return (0);
}
