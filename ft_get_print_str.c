/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_print_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 12:00:26 by dmoetana          #+#    #+#             */
/*   Updated: 2018/08/16 12:00:33 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_get_print_str(char *str, int precision)
{
	int					len;

	len = 0;
	if (str == NULL)
		return (ft_get_print_str("(null)", precision));
	while (*str != '\0' && precision--)
	{
		len += ft_get_print_char(*str);
		str++;
	}
	return (len);
}
