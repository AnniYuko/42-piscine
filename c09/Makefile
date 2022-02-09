vpath %.h includes
vpath %.c srcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
DEPS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

all: $(OBJ)
.PHONY: all

$(OBJ): %.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

#$(OBJ): %.o: %.c
#	$(CC) -c $(CFLAGS) $< -o $@

#libft.a: $(OBJ) ft.h
#	ar cr $@ $^

#rm all temp generated files
.PHONY: clean
clean:
	rm *.o

#rm all temp generated files plus binary from make all
.PHONY: fclean
fclean:
	rm *.o libft.a

#make fclean followed by make all
.PHONY: re
re:
	fclean all
