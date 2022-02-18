vpath %.h includes
vpath %.c srcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
#RM = rm -f		#is predefined
OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o \
    ft_strcpy.o ft_strdup.o ft_strncpy.o ft_putnbr.o
DEPS = ft.h
NAME = libft.a

all: $(NAME)

libft.a: $(OBJ)
	ar cr $@ $^

#what about the "-I ft.h" option
#%.o: %.c $(DEPS)
#	$(CC) -c $(CFLAGS) $^ -o $@

clean:
	$(RM) *.o

fclean:
	$(RM) *.o $(NAME)

re: fclean all
.PHONY: all clean fclean re

#The lib should be at the root of the exercise?
#.o files should be near their .c file?
