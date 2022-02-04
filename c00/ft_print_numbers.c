#include<unistd.h>

void	ft_print_numbers(void)
{
	char	zero;
	int		i;

	zero = 48;
	i = 0;
	while (i <= 9)
	{
		write(1, &zero, 1);
		zero++;
		i++;
	}
}