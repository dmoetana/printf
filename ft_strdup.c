/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:40:28 by dmoetana          #+#    #+#             */
/*   Updated: 2018/08/17 14:40:32 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_strdup(const char *src)
{
	size_t	n;
	char	*dst;

	n = ft_strlen(src);
	dst = (char*)malloc(sizeof(const char) * (n + 1));
	if (dst)
		ft_memcpy(dst, src, n + 1);
	return (dst);
}
