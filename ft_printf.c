/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 12:25:09 by dmoetana          #+#    #+#             */
/*   Updated: 2018/08/16 12:25:15 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_printf(char *fmt, ...)
{
	int					len;
	va_list				va;

	len = 0;
	va_start(va, fmt);
	while (*fmt != '\0')
	{
		if (*fmt != '%')
			len += ft_get_print_char(*fmt);
		else
		{
			fmt++;
			len += ft_get_conversion(&(fmt), va);
		}
		fmt++;
	}
	va_end(va);
	return (len);
}
