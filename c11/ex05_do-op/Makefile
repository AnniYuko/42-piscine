# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 19:01:48 by akroll            #+#    #+#              #
#    Updated: 2022/03/04 19:01:48 by akroll           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Wextra -Werror
RM := rm -f
SRC := $(wildcard *.c)
NAME := do-op

all: do-op

do-op: $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(NAME)

re: clean all
.PHONY: all clean re
