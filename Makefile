# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youellet <youellet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 15:08:49 by youellet          #+#    #+#              #
#    Updated: 2023/11/06 20:16:04 by youellet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= push_swap
CFLAGS	:= -Wextra -Wall -Werror
CC 		:= cc
PLATFORM := $(shell uname)

HEADERS	:= -I ./include
SRCS	:= $(shell find ./src -iname "*.c")
OBJS	:= ${SRCS:.c=.o}

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf " Compiling: $(notdir $<) \n"

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(HEADERS) -o $(NAME)
	make clean

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: clean all

.PHONY: all, clean, fclean, re