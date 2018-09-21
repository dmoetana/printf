/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_handler_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:44:43 by dmoetana          #+#    #+#             */
/*   Updated: 2018/08/17 14:47:19 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_get_handler_char(t_flist *lst, void *c)
{
	int				len;

	len = 0;
	if ((lst->flags)[2] == '0')
		(lst->flags)[0] = '0';
	if ((lst->flags)[3] != '-' && lst->width > 1)
		while (((lst->width)-- - 1))
			len += ft_get_print_char((lst->flags)[0]);
	if (lst->spec == 'c' && !lst->l)
		len += ft_get_print_char((int)c);
	else if (lst->spec == 'C' || (lst->spec == 'c' && lst->l))
		len += ft_get_print_char((int)c);
	else
		len += ft_get_print_char(lst->spec);
	if (lst->width > 1 && (lst->flags)[3] == '-')
		while ((lst->width)-- - 1)
			len += ft_get_print_char(' ');
	return (len);
}
