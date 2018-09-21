/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:51:32 by dmoetana          #+#    #+#             */
/*   Updated: 2018/08/17 14:51:39 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_output(t_flist *lst, va_list va)
{
	int		res;

	res = 0;
	if (lst->spec == '%')
		res = (ft_get_print_percent(lst, '%'));
	else if (lst->spec == 'c' || lst->spec == 'C')
		res = (ft_get_handler_char(lst, va_arg(va, void *)));
	else if (lst->spec == 's' || lst->spec == 'S')
		res = (ft_get_handler_str(lst, va_arg(va, void *)));
	else if (lst->spec == 'd' || lst->spec == 'i' || lst->spec == 'D')
		res = (ft_get_handler_digit(lst, va_arg(va, void *)));
	else if (lst->spec == 'u' || lst->spec == 'U')
		res = (ft_get_handler_unsigned_digit(lst, va_arg(va, void *)));
	else if (lst->spec == 'x' || lst->spec == 'X')
		res = (ft_get_handler_x(lst, va_arg(va, void *)));
	else if (lst->spec == 'o' || lst->spec == 'O')
		res = (ft_get_handler_o(lst, va_arg(va, void *)));
	else if (lst->spec == 'p')
		res = (ft_get_handler_ptr(lst, va_arg(va, void *)));
	else
		res = (ft_get_handler_char(lst, va_arg(va, void *)));
	ft_strdel(&(lst->flags));
	return (res);
}
