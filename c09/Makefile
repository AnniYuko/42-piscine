CC := gcc
CFLAGS := -Wall -Wextra -Werror
RM := rm -rf
srcdir := srcs
incldir := includes
sources := $(wildcard $(srcdir)/*.c)
headers := $(wildcard $(incldir)/*.h)
objects := $(sources:.c=.o)

.PHONY: all
all: libft.a

libft.a: $(objects)
	ar cr $@ $^

$(objects): %.o: %.c $(headers)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	$(RM) $(objects)

.PHONY: fclean
fclean:
	$(RM) $(objects) libft.a

.PHONY: re
re: fclean all
