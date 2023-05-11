# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 22:59:18 by thbui             #+#    #+#              #
#    Updated: 2023/05/08 19:04:15 by thbui            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC		=	gcc
FLAGS		=	-Wall -Wextra -Werror

LIBFT		=	libft
LIB			=	$(LIBFT)/libft.a

SERVER_SRC	=	server.c
SERVER_OBJS	=	$(SERVER_SRC:.c=.o)

CLIENT_SRC	=	client.c
CLIENT_OBJS	=	$(CLIENT_SRC:.c=.o)

OBJS		=	$(SERVER_OBJS) $(CLIENT_OBJS)

INCLUDE		=	-I include
SERVER_NAME	=	server
CLIENT_NAME	=	client
NAME		=	server


all: $(NAME)

$(NAME):
	$(MAKE) -C $(LIBFT)
	$(GCC) $(FLAGS) $(INCLUDE) -c $(SERVER_SRC) -o $(SERVER_OBJS)
	$(GCC) $(FLAGS) $(INCLUDE) -c $(CLIENT_SRC) -o $(CLIENT_OBJS)
	$(GCC) $(FLAGS) $(SERVER_OBJS) $(LIB) -o $(SERVER_NAME)
	$(GCC) $(FLAGS) $(CLIENT_OBJS) $(LIB) -o $(CLIENT_NAME)

clean:
	rm -rf $(OBJS)
	cd libft && make clean

fclean: clean
	rm -rf $(SERVER_NAME) $(CLIENT_NAME)
	cd libft && make fclean

re:	fclean all

.SILENT:
	all