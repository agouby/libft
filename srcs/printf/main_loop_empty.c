/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_loop_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:21:22 by agouby            #+#    #+#             */
/*   Updated: 2019/11/08 17:21:59 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		pr_flag_is_empty(int fd, t_prfgs *prfgs, t_prinf *prinf)
{
	int len;

	len = ft_strlen(prfgs->format_tmp);
	write(fd, prfgs->format_tmp, len);
	free(prfgs->array);
	ft_strdel(&prfgs->format_tmp);
	free(prfgs);
	free(prinf);
	return (len);
}

int		spr_flag_is_empty(char **buf, t_prfgs *prfgs, t_prinf *prinf)
{
	int len;

	len = ft_strlen(prfgs->format_tmp);
	*buf = prfgs->format_tmp;
	free(prfgs->array);
	free(prfgs);
	free(prinf);
	return (len);
}
