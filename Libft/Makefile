# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 13:52:38 by thbui             #+#    #+#              #
#    Updated: 2023/01/13 16:21:20 by thbui            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME = libft.a
SRCS	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_memcpy.c\
			ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
			ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJS	= ${SRCS:.c=*.o}
LIBC	= ar -cvq
RM 		= rm -f

all: $(NAME)

$(NAME): ${OBJS}
		${LIBC} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
