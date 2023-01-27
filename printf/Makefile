# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 16:35:42 by thbui             #+#    #+#              #
#    Updated: 2023/01/27 16:37:05 by thbui            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libftprintf.a
SRC	= ft_printf.c ft_putnbr.c ft_putstr_char.c ft_print_address.c ft_print_hex.c
OBJ	= $(SRC:.c=.o)
LIBC	= ar rc
RM		= rm -f

all: $(NAME)

$(NAME): $(SRC:.c=.o)
			$(LIBC) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean	$(NAME)

.SILENT:
	all