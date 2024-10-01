# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 12:06:09 by tat-nguy          #+#    #+#              #
#    Updated: 2024/09/24 20:19:01 by tat-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR = ./srcs
INC_DIR = ./includes
SRCS = $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_swap.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
INC = $(INC_DIR)/ft.h

CC = cc
CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a
AR = ar -rc
RANLIB = ranlib

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^
	$(RANLIB) $@

$(OBJS): $(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c $(INC)
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
