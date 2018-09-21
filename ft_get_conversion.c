/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:44:01 by dmoetana          #+#    #+#             */
/*   Updated: 2018/08/22 12:51:21 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void				create_list(t_flist *lst)
{
	lst->flags = ft_strdup(" *****");
	lst->width = -1;
	lst->precision = -1;
	lst->hh = 0;
	lst->h = 0;
	lst->l = 0;
	lst->z = 0;
	lst->ll = 0;
	lst->j = 0;
}

static void				ft_flags(char **fmt, t_flist *lst)
{
	if (**fmt == '#')
		(lst->flags)[1] = '#';
	else if (**fmt == '0')
		(lst->flags)[2] = '0';
	else if (**fmt == '-')
		(lst->flags)[3] = '-';
	else if (**fmt == '+')
		(lst->flags)[4] = '+';
	else if (**fmt == ' ')
		(lst->flags)[5] = ' ';
}

static char				ft_double_hl(char *fmt, char c)
{
	char				res;

	res = 0;
	while (ft_strchr_f("+-#0 .123456789hljz", *fmt))
	{
		if (*fmt == c)
			res++;
		fmt++;
	}
	if (res % 2 != 0)
		return (1);
	else
		return (0);
}

static void				ft_modifier(char **fmt, t_flist *lst)
{
	if (**fmt == 'h' && !(lst->h) && !(lst->hh))
	{
		if (ft_double_hl(*fmt, 'h'))
			lst->h = 1;
		else
			lst->hh = 1;
	}
	if (**fmt == 'l' && !(lst->l) && !(lst->ll))
	{
		if (ft_double_hl(*fmt, 'l'))
			lst->l = 1;
		else
			lst->ll = 1;
	}
	if (**fmt == 'z')
		lst->z = 1;
	if (**fmt == 'j')
		(lst->j = 1);
}

int						ft_get_conversion(char **fmt, va_list va)
{
	t_flist				lst;

	create_list(&lst);
	while ((ft_strchr_f("+-0 #", **fmt)))
	{
		ft_flags(fmt, &lst);
		(*fmt)++;
	}
	while ((ft_strchr_f("123456789", **fmt)))
		lst.width = ft_atoi_f(fmt);
	if (**fmt == '.' && (*fmt)++)
	{
		while ((ft_strchr_f("123456789", **fmt)))
			lst.precision = ft_atoi_f(fmt);
	}
	while ((ft_strchr_f("hljz", **fmt)))
	{
		ft_modifier(fmt, &lst);
		(*fmt)++;
	}
	if (ft_strchr_f("%sSpdDioOuUxXcC", **fmt))
		lst.spec = **fmt;
	else
		lst.spec = **fmt;
	return (ft_output(&lst, va));
}
