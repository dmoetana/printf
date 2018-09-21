/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 15:31:14 by kmuenda           #+#    #+#             */
/*   Updated: 2018/08/21 15:51:02 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char *s = "khuthadzo";

	printf("%s\n", "Thato");
	ft_printf("%s", "Thato");
	printf("%d\n", 123);
	ft_printf("%d\n", 123);
//	printf("%x\n", 0293);
//	ft_printf("%x", 0293);
	return 0;
}

