CC = gcc
CFLAGS = -Wall -Wextra -Werror
objects = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
sources = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

vpath %.h includes
vpath %.c srcs

all: $(sources) $(objects)
.PHONY: all

libft.a: $(sources) $(objects)
	$(CC) $(CFLAGS) $^
	ar c $@ $(objects)

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
