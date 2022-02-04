#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;
	int		i;

	z = 122;
	i = 0;
	while (i < 26)
	{
		write(1, &z, 1);
		z--;
		i++;
	}
}