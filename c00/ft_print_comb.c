#include<stdio.h>

void	ft_print_numbers(int hundreds, int tens, int units);

void	ft_print_comb(void)
{
	int	units;
	int	tens;
	int	hundreds;

	units = 0;
	tens = 0;
	hundreds = 0;
	while (hundreds <= 7)
	{
		while (tens <= 8)
		{
			while (units <= 9)
			{
				if (hundreds < tens && tens < units)
				{
					ft_print_numbers(hundreds, tens, units);
				}
				units++;
			}
			units = 0;
			tens++;
		}
		tens = 0;
		hundreds++;
	}
}

void	ft_print_numbers(int hundreds, int tens, int units)
{
	char	h;
	char	t;
	char	u;

	h = '0' + hundreds;
	t = '0' + tens;
	u = '0' + units;
	write(1, &h, 1);
	write(1, &t, 1);
	write(1, &u, 1);
	if (hundreds != 7 && tens != 8 && units != 9)
	{
		write(1, ", ", 2);
	}
}