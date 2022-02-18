CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
srcdir = srcs
headers = includes
SRC := $(wildcard $(srcdir)/*.c)
OBJ := $(SRC:%.c=%.o)
NAME = libft.a

all: $(NAME)

libft.a: $(OBJ)
	ar cr $@ $^

$(OBJ): %.o: %.c
	$(CC) -I $(headers) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all
.PHONY: all clean fclean re
