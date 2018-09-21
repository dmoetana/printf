/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_print_wstr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 12:15:21 by dmoetana          #+#    #+#             */
/*   Updated: 2018/08/17 14:50:58 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int							ft_get_print_wstr(wchar_t *wstr, int precision)
{
	int						res;

	res = 0;
	if (wstr == NULL)
		return (ft_get_print_str("(null)", precision));
	while (*wstr != '\0')
	{
		res += ft_get_print_wchar(*wstr);
		wstr++;
	}
	return (res);
}
