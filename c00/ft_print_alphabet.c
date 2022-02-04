#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;
	int		i;

	a = 96;
	i = -1;
	while (i < 25)
	{
		write(0, &a, 1);
		a++;
		i++;
	}
}