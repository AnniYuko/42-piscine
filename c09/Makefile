vpath %.h includes
vpath %.c srcs

all: ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
	gcc -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
	ar c libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

libft.a: ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
	gcc -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
	ar c libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

clean:
	rm *.o				#rm all temporary generated files

fclean:
	rm *.o libft.a		#rm all temporary generated files plus binary from make all

re:
	fclean; make all	#like a make fclean followed by make all
