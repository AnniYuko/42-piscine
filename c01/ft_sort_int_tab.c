void	ft_swap(int *a, int *b)
{
	int	saved_value;

	saved_value = *a;
	*a = *b;
	*b = saved_value;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < (size - 1))
	{
		while (i < size - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				ft_swap(tab + i, tab + i + 1);
			}
			i++;
		}
		i = 0;
		j++;
	}
}
