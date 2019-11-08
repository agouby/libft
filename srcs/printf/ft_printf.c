/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 14:55:13 by agouby            #+#    #+#             */
/*   Updated: 2017/03/09 02:57:39 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_dprintf(int fd, const char *format, ...)
{
	t_prfgs *prfgs;
	t_prinf *prinf;
	va_list args;

	va_start(args, format);
	pr_init_all_struct(&prinf, &prfgs);
	prfgs->nb_perc = pr_nb_perc(format);
	pr_get_index_perc(prfgs, format);
	if (pr_store_all(args, prfgs, prinf, (char *)format) == 0)
		return (pr_flag_is_empty(fd, prfgs, prinf));
	va_end(args);
	return (pr_del_and_print(fd, prfgs, prinf));
}

int		ft_printf(const char *format, ...)
{
	t_prfgs *prfgs;
	t_prinf *prinf;
	va_list args;

	va_start(args, format);
	pr_init_all_struct(&prinf, &prfgs);
	prfgs->nb_perc = pr_nb_perc(format);
	pr_get_index_perc(prfgs, format);
	if (pr_store_all(args, prfgs, prinf, (char *)format) == 0)
		return (pr_flag_is_empty(1, prfgs, prinf));
	va_end(args);
	return (pr_del_and_print(1, prfgs, prinf));
}

int		ft_sprintf(char **buf, const char *format, ...)
{
	t_prfgs *prfgs;
	t_prinf *prinf;
	va_list args;

	va_start(args, format);
	pr_init_all_struct(&prinf, &prfgs);
	prfgs->nb_perc = pr_nb_perc(format);
	pr_get_index_perc(prfgs, format);
	if (pr_store_all(args, prfgs, prinf, (char *)format) == 0)
		return (spr_flag_is_empty(buf, prfgs, prinf));
	va_end(args);
	return (spr_del_and_print(buf, prfgs, prinf));
}

int		ft_vsprintf(char **buf, const char *format, va_list ap)
{
	t_prfgs *prfgs;
	t_prinf *prinf;

	pr_init_all_struct(&prinf, &prfgs);
	prfgs->nb_perc = pr_nb_perc(format);
	pr_get_index_perc(prfgs, format);
	if (pr_store_all(ap, prfgs, prinf, (char *)format) == 0)
		return (spr_flag_is_empty(buf, prfgs, prinf));
	return (spr_del_and_print(buf, prfgs, prinf));
}
