/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:41:35 by dmoetana          #+#    #+#             */
/*   Updated: 2018/08/22 12:47:26 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <wchar.h>

# define ABS(x) ((x < 0) ? -(x) : (x))

typedef	struct	s_flist
{
	char		*flags;
	short		width;
	short		precision;
	char		hh;
	char		h;
	char		l;
	char		z;
	char		ll;
	char		j;
	char		spec;
	short		size;
}				t_flist;

int				ft_get_handler_char(t_flist *lst, void *c);
int				ft_get_handler_str(t_flist *lst, void *str);
int				ft_get_handler_digit(t_flist *lst, void *digit);
int				ft_get_handler_unsigned_digit(t_flist *lst, void *digit);
int				ft_get_handler_x(t_flist *lst, void *digit);
int				ft_get_handler_o(t_flist *lst, void *digit);
int				ft_get_handler_ptr(t_flist *lst, void *digit);
int				ft_get_print_char(int c);
char			*ft_strdup(const char *src);
int				ft_get_print_str(char *str, int precision);
char			ft_get_print_wchar(wchar_t wc);
int				ft_get_print_wstr(wchar_t *wstr, int precision);
int				ft_output(t_flist *list, va_list va);
int				ft_get_conversion(char **fmt, va_list va);
char			ft_strchr_f(char *s, int c);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
int				ft_atoi_f(char **s);
void			*ft_memcpy(void *dst, const void *src, size_t n);
int				ft_strlen(const char *s);
int				ft_get_print_percent(t_flist *lst, char c);
void			ft_strdel(char **as);
int				ft_printf(char *fmt, ...);
#endif
