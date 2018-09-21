# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 14:39:44 by dmoetana          #+#    #+#              #
#    Updated: 2018/08/17 14:42:19 by dmoetana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc

F = -Wall -Wextra -Werror

NAME = libftprintf.a

OBJECT = ./ft_printf.o \
	./ft_get_conversion.o \
	./ft_get_print_char.o \
	./ft_strchr_f.o \
	./ft_strsub.o \
	./ft_strdup.o \
	./ft_atoi_f.o \
	./ft_get_print_str.o \
	./ft_get_print_wchar.o \
	./ft_get_print_wstr.o \
	./ft_output.o \
	./ft_strlen.o \
	./ft_memcpy.o \
	./ft_get_print_percent.o \
	./ft_get_handler_char.o \
	./ft_get_handler_str.o \
	./ft_get_handler_digit.o \
	./ft_get_handler_unsigned_digit.o \
	./ft_get_handler_x.o \
	./ft_get_handler_o.o \
	./ft_get_handler_ptr.o \
	./ft_strdel.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECT)
		ar rc $(NAME) $(OBJECT)
		ranlib $(NAME)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

ft_printf.o: ft_printf.c
	$(GCC) $(F) -c ft_printf.c

ft_get_print_char.o: ft_get_print_char.c
	$(GCC) $(F) -c ft_get_print_char.c

ft_strchr_f.o: ft_strchr_f.c
	$(GCC) $(F) -c ft_strchr_f.c

ft_strsub.o: ft_strsub.c
	$(GCC) $(F) -c ft_strsub.c

ft_atoi_f.o: ft_atoi_f.c
	$(GCC) $(F) -c ft_atoi_f.c

ft_get_print_str.o: ft_get_print_str.c
	$(GCC) $(F) -c ft_get_print_str.c

ft_get_handler_ptr.o: ft_get_handler_ptr.c
	$(GCC) $(F) -c ft_get_handler_ptr.c

ft_get_print_wchar.o: ft_get_print_wchar.c
	$(GCC) $(F) -c ft_get_print_wchar.c

ft_get_print_wstr.o: ft_get_print_wstr.c
	$(GCC) $(F) -c ft_get_print_wstr.c

ft_output.o: ft_output.c
	$(GCC) $(F) -c ft_output.c

ft_get_conversion.o: ft_get_conversion.c
	$(GCC) $(F) -c ft_get_conversion.c

ft_strdup.o: ft_strdup.c
	$(GCC) $(F) -c ft_strdup.c

ft_memcpy.o: ft_memcpy.c
	$(GCC) $(F) -c ft_memcpy.c

ft_strlen.o: ft_strlen.c
	$(GCC) $(F) -c ft_strlen.c

ft_get_print_percent.o: ft_get_print_percent.c
	$(GCC) $(F) -c ft_get_print_percent.c

ft_get_handler_char.o: ft_get_handler_char.c
	$(GCC) $(F) -c ft_get_handler_char.c

ft_get_handler_str.o: ft_get_handler_str.c
	$(GCC) $(F) -c ft_get_handler_str.c

ft_get_handler_digit.o: ft_get_handler_digit.c
	$(GCC) $(F) -c ft_get_handler_digit.c

ft_get_handler_unsigned_digit.o: ft_get_handler_unsigned_digit.c
	$(GCC) $(F) -c ft_get_handler_unsigned_digit.c

ft_get_handler_x.o: ft_get_handler_x.c
	$(GCC) $(F) -c ft_get_handler_x.c

ft_get_handler_o.o: ft_get_handler_o.c
	$(GCC) $(F) -c ft_get_handler_o.c

ft_strdel.o: ft_strdel.c
	$(GCC) $(F) -c ft_strdel.c
