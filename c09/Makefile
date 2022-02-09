vpath %.h includes
vpath %.c srcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
DEPS = ft.h

all: libft.a

libft.a: $(OBJ)
	ar cr $@ $^

#is the -I option necessary?
%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) -I $(DEPS) $< -o $@

clean:
	rm *.o

fclean:
	rm -f *.o libft.a

re: fclean all
.PHONY: all clean fclean re

#The lib should be at the root of the exercise?
#.o files should be near their .c file?
