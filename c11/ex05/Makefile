# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 11:52:34 by tat-nguy          #+#    #+#              #
#    Updated: 2024/10/06 12:46:01 by tat-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR = ./srcs
INC_DIR = ./includes
SRCS = $(SRCS_DIR)/main.c $(SRCS_DIR)/ft_op.c $(SRCS_DIR)/tools.c
INC = $(INC_DIR)/ft_op.h
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = do-op

#Rule to create the executable
all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

#Rule to compile object files
%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

#Clean object files
clean:
	rm -f $(OBJS)

#Clean object files (by recall clean) and the executable
fclean: clean
	rm -f $(NAME)

#Rebuild everything with 'fclean' everything and recall 'all'
re: fclean all

.PHONY: all clean fclean re
