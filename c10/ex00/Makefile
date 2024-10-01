# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 21:17:24 by tat-nguy          #+#    #+#              #
#    Updated: 2024/10/01 21:44:25 by tat-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = ft_display_file.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rc
RANLIB = ranlib

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) -o $(NAME) $(OBJS)

%.o: %.c
		$(CC) -c $(CFLAGS) $< -o $@

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

.PHONY: all clean fclean
