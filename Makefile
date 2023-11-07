# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youellet <youellet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 15:08:49 by youellet          #+#    #+#              #
#    Updated: 2023/11/06 20:46:52 by youellet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := push_swap
CFLAGS  := -Wextra -Wall -Werror
CC      := cc
PLATFORM := $(shell uname)

HEADERS := -I ./include
SRCS := src/cmd_pswap.c src/cmd_r.c src/cmd_swap.c src/free_and_error.c src/stack_init.c src/string_utils.c \
        src/cmd_push.c src/cmd_rr.c src/cmd_tiny.c src/main.c src/stack_utils.c

OBJS    := $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf " Compiling: $(notdir $<) \n"

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(HEADERS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
