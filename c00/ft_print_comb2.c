#include <unistd.h>

void	print_num(int n);

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 99)
	{
		while (num2 <= 99)
		{
			if (num1 < num2)
			{
				print_num(num1);
				write(1, " ", 1);
				print_num(num2);
				if (num1 != 98)
					write(1, ", ", 2);
			}
			num2++;
		}
		num2 = 0;
		num1++;
	}
}

void	print_num(int num)
{
	char	a;
	char	b;

	if (num < 10)
	{
		write(1, "0", 1);
		a = num + '0';
		write(1, &a, 1);
	}
	else
	{
		b = (num % 10) + '0';
		a = (num / 10) + '0';
		write(1, &a, 1);
		write(1, &b, 1);
	}
}
