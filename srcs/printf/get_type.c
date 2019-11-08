/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_type.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <agouby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 21:11:47 by agouby            #+#    #+#             */
/*   Updated: 2017/03/03 00:27:35 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	pr_get_type(t_prfgs *prfgs)
{
	if (!*prfgs->str_flag)
		return ('\0');
	return (*(prfgs->str_flag + prfgs->len_flag - 1));
}
